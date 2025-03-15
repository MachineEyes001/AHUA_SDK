#include "DahuaCamera.h"
#include <bitset>

extern QString srcDirPathOK;
extern QString srcDirPathLog;
extern QString srcDirPathNG;

// 取流回调函数
static void FrameCallback(IMV_Frame* pFrame, void* pUser)
{
	DahuaCamera* pDahuaCamera = (DahuaCamera*)pUser;
	if (!pDahuaCamera)
	{
		printf("pDahuaCamera is NULL!\n");
		return;
	}

	CFrameInfo frameInfo;
	frameInfo.m_nWidth = (int)pFrame->frameInfo.width;
	frameInfo.m_nHeight = (int)pFrame->frameInfo.height;
	frameInfo.m_nBufferSize = (int)pFrame->frameInfo.size;
	frameInfo.m_nPaddingX = (int)pFrame->frameInfo.paddingX;
	frameInfo.m_nPaddingY = (int)pFrame->frameInfo.paddingY;
	frameInfo.m_ePixelType = pFrame->frameInfo.pixelFormat;
	frameInfo.m_pImageBuf = (unsigned char*)malloc(sizeof(unsigned char) * frameInfo.m_nBufferSize);
	frameInfo.m_nTimeStamp = pFrame->frameInfo.timeStamp;

	// 内存申请失败，直接返回
	if (frameInfo.m_pImageBuf != NULL)
	{
		memcpy(frameInfo.m_pImageBuf, pFrame->pData, frameInfo.m_nBufferSize);

		if (pDahuaCamera->m_qDisplayFrameQueue.size() > 16)
		{
			CFrameInfo frameOld;
			if (pDahuaCamera->m_qDisplayFrameQueue.get(frameOld))
			{
				free(frameOld.m_pImageBuf);
				frameOld.m_pImageBuf = NULL;
			}
		}

		pDahuaCamera->m_qDisplayFrameQueue.push_back(frameInfo);
	}
}
// 显示线程
static unsigned int __stdcall displayThread(void* pUser)
{
	DahuaCamera* pDahuaCamera = (DahuaCamera*)pUser;
	if (!pDahuaCamera)
	{
		printf("pDahuaCamera is NULL!\n");
		return -1;
	}

	pDahuaCamera->display();

	return 0;
}
// 存储线程
static unsigned int __stdcall saveThread(void* pUser)
{
	DahuaCamera* pDahuaCamera = (DahuaCamera*)pUser;
	if (!pDahuaCamera)
	{
		printf("pDahuaCamera is NULL!\n");
		return -1;
	}

	pDahuaCamera->save();

	return 0;
}
DahuaCamera::DahuaCamera(): m_currentCameraKey("")
, m_devHandle(NULL)
, m_isExitDisplayThread(false)
, m_isExitSaveThread(false)
, m_threadHandleSave(NULL)
, m_threadHandleDisplay(NULL)
{
    qRegisterMetaType<uint64_t>("uint64_t");
	//读取模型
	model_path = "best.onnx";
	if (yolov8.ReadModel(model_path, false)) {
		std::cout << "read net ok!" << std::endl;
	}
	else {
		std::cout << "read onnx model failed!";
	}

	// 读取比例因子
	QSettings settings("MyRatioSetting", QSettings::IniFormat);
	Px2Camera_Ratio = settings.value("Px2Camera_Ratio").toDouble();
	//std::cout << "ratio:" << Px2Camera_Ratio;

	// 启动显示线程
	m_threadHandleDisplay = (HANDLE)_beginthreadex(NULL,0,displayThread,this,CREATE_SUSPENDED,NULL);
	// 启动存储线程
	m_threadHandleSave = (HANDLE)_beginthreadex(NULL, 0, saveThread, this, CREATE_SUSPENDED, NULL);

    if (!m_threadHandleDisplay || !m_threadHandleSave)
	{
		printf("Failed to create display thread!\n");
	}
	else
	{
		ResumeThread(m_threadHandleDisplay);
		ResumeThread(m_threadHandleSave);
		m_isExitDisplayThread = false;
		m_isExitSaveThread = false;
	}
}
DahuaCamera::~DahuaCamera()
{
	// 关闭显示线程
	m_isExitDisplayThread = true;
	WaitForSingleObject(m_threadHandleDisplay, INFINITE);
	CloseHandle(m_threadHandleDisplay);
	// 关闭存储线程
	m_isExitSaveThread = true;
	WaitForSingleObject(m_threadHandleSave, INFINITE);
	CloseHandle(m_threadHandleSave);

	IMV_DestroyHandle(m_devHandle);
	m_devHandle = NULL;
}
// 打开相机
bool DahuaCamera::CameraOpen(void)
{
	int ret = IMV_OK;

	if (m_currentCameraKey.length() == 0)
	{
		QMessageBox::warning(0, "警告", "打开相机失败，没有相机!");
		return false;
	}

	if (m_devHandle)
	{
		printf("m_devHandle is already been create!\n");
		return false;
	}
	QByteArray cameraKeyArray = m_currentCameraKey.toLocal8Bit();
	char* cameraKey = cameraKeyArray.data();

	ret = IMV_CreateHandle(&m_devHandle, modeByCameraKey, (void*)cameraKey);
	if (IMV_OK != ret)
	{
		printf("create devHandle failed! cameraKey[%s], ErrorCode[%d]\n", cameraKey, ret);
		return false;
	}

	// 打开相机 
	ret = IMV_Open(m_devHandle);
	if (IMV_OK != ret)
	{
		printf("open camera failed! ErrorCode[%d]\n", ret);
		return false;
	}

	return true;
}
// 关闭相机
bool DahuaCamera::CameraClose(void)
{
	int ret = IMV_OK;

	if (!m_devHandle)
	{
		printf("close camera fail. No camera.\n");
		return false;
	}

	if (false == IMV_IsOpen(m_devHandle))
	{
		printf("camera is already close.\n");
		return false;
	}

	ret = IMV_Close(m_devHandle);
	if (IMV_OK != ret)
	{
		printf("close camera failed! ErrorCode[%d]\n", ret);
		return false;
	}

	ret = IMV_DestroyHandle(m_devHandle);
	if (IMV_OK != ret)
	{
		printf("destroy devHandle failed! ErrorCode[%d]\n", ret);
		return false;
	}

	m_devHandle = NULL;

	return true;
}
// 开始采集
bool DahuaCamera::CameraStart()
{
	int ret = IMV_OK;

	if (IMV_IsGrabbing(m_devHandle))
	{
		printf("camera is already grebbing.\n");
		return false;
	}

	ret = IMV_AttachGrabbing(m_devHandle, FrameCallback, this);
	if (IMV_OK != ret)
	{
		printf("Attach grabbing failed! ErrorCode[%d]\n", ret);
		return false;
	}

	ret = IMV_StartGrabbing(m_devHandle);
	if (IMV_OK != ret)
	{
		printf("start grabbing failed! ErrorCode[%d]\n", ret);
		return false;
	}

	return true;
}
// 停止采集
bool DahuaCamera::CameraStop()
{
	int ret = IMV_OK;
	if (!IMV_IsGrabbing(m_devHandle))
	{
		printf("camera is already stop grebbing.\n");
		return false;
	}

	ret = IMV_StopGrabbing(m_devHandle);
	if (IMV_OK != ret)
	{
		printf("Stop grabbing failed! ErrorCode[%d]\n", ret);
		return false;
	}

	// 清空显示队列 
	CFrameInfo frameOld;
	while (m_qDisplayFrameQueue.get(frameOld))
	{
		free(frameOld.m_pImageBuf);
		frameOld.m_pImageBuf = NULL;
	}

	m_qDisplayFrameQueue.clear();

	return true;
}
// 切换采集方式、触发方式（连续采集、外部触发、软件触发）
bool DahuaCamera::CameraChangeTrig(ETrigType trigType)
{
	int ret = IMV_OK;

	if (trigContinous == trigType)
	{
		// 设置触发模式
		ret = IMV_SetEnumFeatureSymbol(m_devHandle, "TriggerMode", "Off");
		if (IMV_OK != ret)
		{
			printf("set TriggerMode value = Off fail, ErrorCode[%d]\n", ret);
			return false;
		}
	}
	else if (trigSoftware == trigType)
	{
		// 设置触发器
		ret = IMV_SetEnumFeatureSymbol(m_devHandle, "TriggerSelector", "FrameStart");
		if (IMV_OK != ret)
		{
			printf("set TriggerSelector value = FrameStart fail, ErrorCode[%d]\n", ret);
			return false;
		}

		// 设置触发模式
		ret = IMV_SetEnumFeatureSymbol(m_devHandle, "TriggerMode", "On");
		if (IMV_OK != ret)
		{
			printf("set TriggerMode value = On fail, ErrorCode[%d]\n", ret);
			return false;
		}

		// 设置触发源为软触发
		ret = IMV_SetEnumFeatureSymbol(m_devHandle, "TriggerSource", "Software");
		if (IMV_OK != ret)
		{
			printf("set TriggerSource value = Software fail, ErrorCode[%d]\n", ret);
			return false;
		}
	}
	else if (trigLine == trigType)
	{
		// 设置触发器
		ret = IMV_SetEnumFeatureSymbol(m_devHandle, "TriggerSelector", "FrameStart");
		if (IMV_OK != ret)
		{
			printf("set TriggerSelector value = FrameStart fail, ErrorCode[%d]\n", ret);
			return false;
		}

		// 设置触发模式
		ret = IMV_SetEnumFeatureSymbol(m_devHandle, "TriggerMode", "On");
		if (IMV_OK != ret)
		{
			printf("set TriggerMode value = On fail, ErrorCode[%d]\n", ret);
			return false;
		}

		// 设置触发源为Line1触发
		ret = IMV_SetEnumFeatureSymbol(m_devHandle, "TriggerSource", "Line1");
		if (IMV_OK != ret)
		{
			printf("set TriggerSource value = Line1 fail, ErrorCode[%d]\n", ret);
			return false;
		}
	}

	return true;
}
// 执行一次软触发
bool DahuaCamera::ExecuteSoftTrig(void)
{
	int ret = IMV_OK;

	ret = IMV_ExecuteCommandFeature(m_devHandle, "TriggerSoftware");
	if (IMV_OK != ret)
	{
		printf("ExecuteSoftTrig fail, ErrorCode[%d]\n", ret);
		return false;
	}
	printf("ExecuteSoftTrig success.\n");
	return true;
}
// 设置当前相机  
void DahuaCamera::SetCamera(const QString& strKey)
{
	m_currentCameraKey = strKey;
}
// 图片类型转换
QImage DahuaCamera::Mat2QImage(const cv::Mat& mat)
{
	// 8-bits unsigned, NO. OF CHANNELS = 1  
	if (mat.type() == CV_8UC1)
	{
		QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
		// Set the color table (used to translate colour indexes to qRgb values)  
		image.setColorCount(256);
		for (int i = 0; i < 256; i++)
		{
			image.setColor(i, qRgb(i, i, i));
		}
		// Copy input Mat  
		uchar* pSrc = mat.data;
		for (int row = 0; row < mat.rows; row++)
		{
			uchar* pDest = image.scanLine(row);
			memcpy(pDest, pSrc, mat.cols);
			pSrc += mat.step;
		}
		return image;
	}
	// 8-bits unsigned, NO. OF CHANNELS = 3  
	else if (mat.type() == CV_8UC3)
	{
		// Copy input Mat  
		const uchar* pSrc = (const uchar*)mat.data;
		// Create QImage with same dimensions as input Mat  
		QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
		return image.rgbSwapped();
	}
	else if (mat.type() == CV_8UC4)
	{
		// Copy input Mat  
		const uchar* pSrc = (const uchar*)mat.data;
		// Create QImage with same dimensions as input Mat  
		QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
		return image.copy();
	}
	else
	{
		qDebug() << "ERROR: Mat could not be converted to QImage.";
		return QImage();
	}
}
cv::Mat DahuaCamera::BandhnuDetect(const cv::Mat& openCvImage)
{
	//检测
    cv::Mat img = openCvImage.clone();
    cv::cvtColor(img, img, cv::COLOR_GRAY2BGR);
	std::vector<OutputSeg> output;
	yolov8.OnnxDetect(img, output);

	//处理

	//结果输出
	Multi_Clothes_Result.push_back(true);//衣服1
	Multi_Clothes_Result.push_back(true);//衣服2
	Multi_Clothes_Result.push_back(true);//衣服3
	Multi_Clothes_Result.push_back(true);//衣服4
	Multi_Clothes_Result.push_back(true);//衣服5
	Multi_Clothes_Result.push_back(true);//衣服6
	Multi_Clothes_Result.push_back(false);//衣服7
	Multi_Clothes_Result.push_back(true);//衣服8

    return img;
}
// 获取符号位
double DahuaCamera::binaryToDecimal(std::vector<double>& v) {
	std::bitset<8> bits; // 使用32位二进制数
	for (int i = 0; i < v.size(); i++) {
		if (v[i] >= 0) {
			bits.set(i); // 如果数为正数，将对应位设为1
		}
	}
	return bits.to_ulong(); // 将二进制数转换成十进制数
}
//通讯
bool DahuaCamera::ModbusTCP()
{
	//设置PCL地址
	modbus_set_slave(ctx, 1);
	uint16_t data[10];
	int g = 0;
	for (int i = 0; i < Resultdata.size(); i++)
	{
		data[g] = Resultdata[i];
		g++;
		/*std::cout << Sockdata[i] << ' ';*/
	}
	data[8] = Resultdata.size();
	data[9] = 1;//标志位，信号
	std::cout << "写入数据：";
	for (int i = 0; i < 10; i++)
	{
		std::cout << data[i] << ",";
	}

	// 将数据发送到PLC
	int num_regs = Resultdata.size() + 2;
	int write_addr = 0;  // 这里的地址可以根据PLC的需要进行修改
	if (modbus_write_registers(ctx, write_addr, num_regs, data) == -1) {
		qDebug() << "Unable to write data to PLC!" << modbus_strerror(errno);
		return -1;
	}
	qDebug() << "Data write success!";
	Resultdata.clear();

	return true;
}
// 显示
bool DahuaCamera::ShowImage(unsigned char* pRgbFrameBuf, int nWidth, int nHeight, uint64_t nPixelFormat)
{
    clock_t start = clock(); // 记录程序开始时间
	cv::Mat openCvImage;
	if (NULL == pRgbFrameBuf || nWidth == 0 || nHeight == 0)
	{
		printf("%s image is invalid.\n", __FUNCTION__);
		return false;
	}
	if (gvspPixelMono8 == nPixelFormat)
	{
		cv::Mat mat(nHeight, nWidth, CV_8UC1, pRgbFrameBuf);
		openCvImage = mat.clone();
	}
	else
	{
		cv::Mat mat(nHeight, nWidth, CV_8UC3, pRgbFrameBuf);
		openCvImage = mat.clone();
	}

    //定位检测
    resultimg = BandhnuDetect(openCvImage);

    ifsave = true;  //启动存储

	//通讯
	////传数值，如 -2.556，5.888
	//std::vector<double> resultdata;
	//resultdata.assign({ Multi_Clothes_Result[0],Multi_Clothes_Result[1],Multi_Clothes_Result[2],Multi_Clothes_Result[3],
	//	Multi_Clothes_Result[4],Multi_Clothes_Result[5] ,Multi_Clothes_Result[6] ,Multi_Clothes_Result[7] });
	//double sym = binaryToDecimal(resultdata);//获取符号位
	//Resultdata.assign({ Multi_Clothes_Result[0],Multi_Clothes_Result[1],Multi_Clothes_Result[2],Multi_Clothes_Result[3],
	//	Multi_Clothes_Result[4],Multi_Clothes_Result[5] ,Multi_Clothes_Result[6] ,Multi_Clothes_Result[7],sym });
	
	//传信号，如 1，1，1，1，1，1，0，1(每一件衣服的检测状态，1为状态正常，0为状态异常需要报警
	Resultdata.assign({ Multi_Clothes_Result[0],Multi_Clothes_Result[1],Multi_Clothes_Result[2],Multi_Clothes_Result[3],
		Multi_Clothes_Result[4],Multi_Clothes_Result[5] ,Multi_Clothes_Result[6] ,Multi_Clothes_Result[7]});
	
	bool sendsuccess = ModbusTCP();
	int sendnum = 0;
	while (!sendsuccess && sendnum <= 10)
	{
		sendsuccess = ModbusTCP();
		sleep(2);
		sendnum++;
	}

    // 创建QImage对象
    Qimg = Mat2QImage(resultimg);
    // 发出图像显示信号
    emit showImageSignal(Qimg, Multi_Clothes_Result);


    clock_t finish = clock();  // 记录程序结束时间
    double time_length = (double)(finish - start) / CLOCKS_PER_SEC; //根据两个时刻的差，计算出处理的时间
    std::cout << "process time:" << time_length << std::endl;
    Log("处理时间:", time_length);
	free(pRgbFrameBuf);
	return true;
}
// 检查路径是否存在且为目录
bool Path_Is_Directory(const wchar_t* path) {
    DWORD attributes = GetFileAttributesW(path);
    return (attributes != INVALID_FILE_ATTRIBUTES && (attributes & FILE_ATTRIBUTE_DIRECTORY));
}
void DahuaCamera::SaveImage(cv::Mat& img, QString CAM, int OK)
{
	SYSTEMTIME st;
	QString m_strFolderPath, m_strImagePath;
	GetLocalTime(&st);
	if (OK == 0)
	{
        m_strFolderPath = QString("%1/%2-%3-%4").arg(srcDirPathNG).arg(st.wMonth).arg(st.wDay).arg(CAM);
        m_strImagePath = QString("%1/%2-%3-%4/%5-%6-%7.jpg").arg(srcDirPathNG).arg(st.wMonth).arg(st.wDay).arg(CAM).arg(st.wHour).arg(st.wMinute).arg(st.wSecond);
	}
	else if (OK == 1)
	{
        m_strFolderPath = QString("%1/%2-%3-%4").arg(srcDirPathOK).arg(st.wMonth).arg(st.wDay).arg(CAM);
        m_strImagePath = QString("%1/%2-%3-%4/%5-%6-%7.jpg").arg(srcDirPathOK).arg(st.wMonth).arg(st.wDay).arg(CAM).arg(st.wHour).arg(st.wMinute).arg(st.wSecond);
	}
	printf("%s\n", m_strFolderPath.toStdString().data());
    // 将 QString 转换为 std::wstring
   std::wstring wstrFolderPath = m_strFolderPath.toStdWString();

   // 获取 LPCWSTR 类型的路径
   LPCWSTR pszPath = wstrFolderPath.c_str();

   // 检查路径是否存在且为目录，如果不存在则创建
   if (!Path_Is_Directory(pszPath)) {
       if (!CreateDirectoryW(pszPath, NULL)) {
           // 处理创建目录失败的情况
           DWORD error = GetLastError();
           if (error != ERROR_ALREADY_EXISTS) {
               wprintf(L"Failed to create directory. Error: %lu\n", error);
               return;
           }
       }
   }
	std::string imgPath = m_strImagePath.toStdString();
	imwrite(imgPath, img);
}
// 显示线程
void DahuaCamera::display()
{
	while (!m_isExitDisplayThread)
	{
		CFrameInfo frameInfo;

		if (false == m_qDisplayFrameQueue.get(frameInfo))
		{
			Sleep(1);
			continue;
		}
		// mono8格式可不做转码，直接显示，其他格式需要经过转码才能显示 
		if (gvspPixelMono8 == frameInfo.m_ePixelType)
		{
			// 显示线程中发送显示信号，在主线程中显示图像
			ShowImage(frameInfo.m_pImageBuf, (int)frameInfo.m_nWidth, (int)frameInfo.m_nHeight, (uint64_t)frameInfo.m_ePixelType);
		}
		else
		{
			// 转码 
			unsigned char* pRGBbuffer = NULL;
			int nRgbBufferSize = 0;
			nRgbBufferSize = frameInfo.m_nWidth * frameInfo.m_nHeight * 3;
			pRGBbuffer = (unsigned char*)malloc(nRgbBufferSize);
			if (pRGBbuffer == NULL)
			{
				// 释放内存
				free(frameInfo.m_pImageBuf);
				printf("RGBbuffer malloc failed.\n");
				continue;
			}

			IMV_PixelConvertParam stPixelConvertParam;
			stPixelConvertParam.nWidth = frameInfo.m_nWidth;
			stPixelConvertParam.nHeight = frameInfo.m_nHeight;
			stPixelConvertParam.ePixelFormat = frameInfo.m_ePixelType;
			stPixelConvertParam.pSrcData = frameInfo.m_pImageBuf;
			stPixelConvertParam.nSrcDataLen = frameInfo.m_nBufferSize;
			stPixelConvertParam.nPaddingX = frameInfo.m_nPaddingX;
			stPixelConvertParam.nPaddingY = frameInfo.m_nPaddingY;
			stPixelConvertParam.eBayerDemosaic = demosaicNearestNeighbor;
			stPixelConvertParam.eDstPixelFormat = gvspPixelRGB8;
			stPixelConvertParam.pDstBuf = pRGBbuffer;
			stPixelConvertParam.nDstBufSize = nRgbBufferSize;

			int ret = IMV_PixelConvert(m_devHandle, &stPixelConvertParam);
			if (IMV_OK != ret)
			{
				// 释放内存 
				printf("image convert to RGB failed! ErrorCode[%d]\n", ret);
				free(frameInfo.m_pImageBuf);
				free(pRGBbuffer);
				continue;
			}

			// 释放内存
			free(frameInfo.m_pImageBuf);

			// 显示线程中发送显示信号，在主线程中显示图像
			ShowImage(pRGBbuffer, (int)stPixelConvertParam.nWidth, (int)stPixelConvertParam.nHeight, (uint64_t)stPixelConvertParam.eDstPixelFormat);
		}
	}
}
// 存储线程
void DahuaCamera::save()
{
	while (!m_isExitSaveThread)
	{
		if (!ifsave)
		{
			Sleep(1);
			continue;
		}
		// 图像保存
        if (ifsuccess)
		{
            QString CAM = "CAM1";
			int OK = 1;

            //保存图像
            cv::putText(resultimg, "OK", cv::Point(50, resultimg.rows - 50), cv::FONT_HERSHEY_SIMPLEX, 3, cv::Scalar(0, 255, 0), 4);
            SaveImage(resultimg, CAM, OK);
        }
		else
		{
            QString CAM = "CAM1";
            int OK = 0;

            //保存图像
            cv::putText(resultimg, "NG", cv::Point(50, resultimg.rows - 50), cv::FONT_HERSHEY_SIMPLEX, 3, cv::Scalar(0, 255, 0), 4);
            SaveImage(resultimg, CAM, OK);
        }
		ifsave = false;
	}
}