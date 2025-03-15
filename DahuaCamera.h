#ifndef DAHUACAMERA_H
#define DAHUACAMERA_H
#include <QThread>
#include <iostream>
#include <array>
#include <vector>
#include <boost/asio.hpp>
#include <QFileDialog>
#include <QDateTime>
#include <modbus.h>
#include <unordered_set>
#include <stdio.h>
#include "IMV/IMVApi.h"
#include <QImage>
#include <QString>
#include <QMessageBox>
#include "yolov8_onnx.h"
#include <windows.h>
#include "MessageQue.h"
#include <QSettings>
#include "log.h"
#include "shlwapi.h"
#pragma comment(lib, "shlwapi.lib")

// 帧信息 
class CFrameInfo
{
public:
	CFrameInfo()
	{
		m_pImageBuf = NULL;
		m_nBufferSize = 0;
		m_nWidth = 0;
		m_nHeight = 0;
		m_ePixelType = gvspPixelMono8;
		m_nPaddingX = 0;
		m_nPaddingY = 0;
		m_nTimeStamp = 0;
	}

	~CFrameInfo()
	{
	}

public:
	unsigned char* m_pImageBuf;
	int			m_nBufferSize;
	int			m_nWidth;
	int			m_nHeight;
	IMV_EPixelType	m_ePixelType;
	int			m_nPaddingX;
	int			m_nPaddingY;
	uint64_t	m_nTimeStamp;
};

class DahuaCamera : public QThread
{
	Q_OBJECT

public:
	DahuaCamera(void);
	~DahuaCamera(void);

	// 枚举触发方式
	enum ETrigType
	{
		trigContinous = 0,	// 连续拉流 | continue grabbing
		trigSoftware = 1,	// 软件触发 | software trigger
		trigLine = 2,		// 外部触发	| external trigger
	};

	bool ModbusTCP();
	double binaryToDecimal(std::vector<double>& v);

	// 打开相机
	bool CameraOpen(void);
	// 关闭相机
	bool CameraClose(void);
	// 开始采集
	bool CameraStart(void);
	// 停止采集
	bool CameraStop(void);
	// 切换采集方式、触发方式 （连续采集、外部触发、软件触发）
	bool CameraChangeTrig(ETrigType trigType = trigContinous);
	// 执行一次软触发        
	bool ExecuteSoftTrig(void);
	// 设置当前相机
	void SetCamera(const QString& strKey);
	// 图片格式转换
	QImage Mat2QImage(const cv::Mat& mat);
	// 显示线程
	void display();
	// 存储线程
	void save();
	// 显示一帧图像
	bool ShowImage(unsigned char* pRgbFrameBuf, int nWidth, int nHeight, uint64_t nPixelFormat);
    cv::Mat BandhnuDetect(const cv::Mat& openCvImage);
    void SaveImage(cv::Mat& img, QString CAM, int OK);

signals:
	// 显示图像的信号，在displayThread中发送该信号，在主线程中显示
	void showImageSignal(const QImage& img, std::vector<bool> Multi_Clothes_Result);

public:
	modbus_t* ctx; //Modbus TCP / IP初始化
	TMessageQue<CFrameInfo>	 m_qDisplayFrameQueue;		// 显示队列      | diaplay queue
	std::string model_path;
	Yolov8Onnx yolov8;
	bool ifsave = false;
    bool ifsuccess = false;
	std::vector<bool> Multi_Clothes_Result;//结果参数
	double Px2Camera_Ratio;
	std::vector<int> Resultdata; //获取通讯数据

private:

	QString	m_currentCameraKey;			// 当前相机key | current camera key
	IMV_HANDLE m_devHandle;				// 相机句柄 | camera handle
	
    QImage Qimg;
	cv::Mat resultimg;

	bool m_isExitDisplayThread;
	bool m_isExitSaveThread;
	HANDLE m_threadHandleDisplay;
	HANDLE m_threadHandleSave;


	std::thread connection_thread;

};
#endif // CAMMERWIDGET_H
