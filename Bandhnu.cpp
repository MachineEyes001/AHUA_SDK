#include "Bandhnu.h"
extern std::vector<bool> Multi_Clothes_Result;
static int ConnectorDisconnect = 0;
static int StartorStop = 0;
static int ConnectPLC = 0;

Bandhnu::Bandhnu(QWidget* parent) :
	QMainWindow(parent)
{
	ui.setupUi(this);

	// 读取上一次保存的值
	QSettings settings("MyPLCsetting", QSettings::IniFormat);
	QString IPValue = settings.value("IPValue").toString();
	if (!IPValue.isEmpty())
	{
		ui.IP->setText(IPValue);
	}
	QString portValue = settings.value("portValue").toString();
	if (!portValue.isEmpty())
	{
		ui.port->setText(portValue);
	}

	camera = new DahuaCamera();
	connect(camera, &DahuaCamera::showImageSignal, this, &Bandhnu::showImage);

	initUi();
}
Bandhnu::~Bandhnu()
{
	// 保存当前输入的值
	QSettings settings("MyPLCsetting", QSettings::IniFormat);
	QString currentIPValue = ui.IP->text();
	settings.setValue("IPValue", currentIPValue);
	QString currentportValue = ui.port->text();
	settings.setValue("portValue", currentportValue);
	delete camera, camera = nullptr;
}
//UI初始化
void Bandhnu::initUi()
{
	int ret = IMV_OK;

	ret = IMV_EnumDevices(&m_deviceInfoList, interfaceTypeAll);
	if (IMV_OK != ret)
	{
		printf("Enumeration devices failed! ErrorCode[%d]\n", ret);
		return;
	}
	if (m_deviceInfoList.nDevNum < 1)
	{
		ui.CameraSelectcomboBox->setEnabled(false);
		ui.TriggerModecomboBox->setEnabled(false);
		ui.pushButtonOpenCam->setEnabled(false);
	}
	else
	{
		ui.CameraSelectcomboBox->setEnabled(true);
		ui.TriggerModecomboBox->setEnabled(true);
		ui.pushButtonOpenCam->setEnabled(true);;

		for (unsigned int i = 0; i < m_deviceInfoList.nDevNum; i++)
		{
			ui.CameraSelectcomboBox->addItem(m_deviceInfoList.pDevInfo[i].cameraKey);
		}

		camera->SetCamera(m_deviceInfoList.pDevInfo[0].cameraKey);
	}
	ui.pushButtonCloseCam->setDisabled(true);
	ui.pushButtonSoftTrig->setDisabled(true);
	ui.pushButtonStartCam->setDisabled(true);
	ui.pushButtonStopCam->setDisabled(true);
}
// 指示灯
void setLED(QPushButton* Button, int color, int width, int height)
{
	// 先设置矩形大小
	QString min_width = QString("min-width: %1px;").arg(width);              // 最小宽度
	QString min_height = QString("min-height: %1px;").arg(height);            // 最小高度
	QString max_width = QString("max-width: %1px;").arg(width);              // 最大宽度
	QString max_height = QString("max-height: %1px;").arg(height);            // 最大高度
	// 再设置边界形状及边框
	QString border_radius = QString("border-radius: %1px;").arg(height / 2);    // 边框是圆角，半径为size/2
	QString border = QString("border:1px solid black;");                    // 边框为1px黑色
	// 最后设置背景颜色
	QString background = "background-color:";
	switch (color)
	{
	case 0:
		// 红色
		background += "rgb(255,0,0)";
		break;
	case 1:
		// 绿色
		background += "rgb(0,255,0)";
		break;
	}

	const QString SheetStyle = min_width + min_height + max_width + max_height + border_radius + border + background;
	Button->setStyleSheet(SheetStyle);
}
//实时显示
void Bandhnu::showImage(const QImage& img, std::vector<bool> Multi_Clothes_Result)
{
	for (int i = 0; i < Multi_Clothes_Result.size(); i++)
	{
		switch (i) {
		case 0:
		{
			if(Multi_Clothes_Result[i])
			{
				setLED(ui.LED_1, 1, 60, 60);
			}
			else {
				setLED(ui.LED_1, 0, 60, 60);
			}
			break;
		}
		case 1:
		{
			if (Multi_Clothes_Result[i])
			{
				setLED(ui.LED_2, 1, 60, 60);
			}
			else {
				setLED(ui.LED_2, 0, 60, 60);
			}
			break;
		}
		case 2:
		{
			if (Multi_Clothes_Result[i])
			{
				setLED(ui.LED_3, 1, 60, 60);
			}
			else {
				setLED(ui.LED_3, 0, 60, 60);
			}
			break;
		}
		case 3:
		{
			if (Multi_Clothes_Result[i])
			{
				setLED(ui.LED_4, 1, 60, 60);
			}
			else {
				setLED(ui.LED_4, 0, 60, 60);
			}
			break;
		}
		case 4:
		{
			if (Multi_Clothes_Result[i])
			{
				setLED(ui.LED_5, 1, 60, 60);
			}
			else {
				setLED(ui.LED_5, 0, 60, 60);
			}
			break;
		}
		case 5:
		{
			if (Multi_Clothes_Result[i])
			{
				setLED(ui.LED_6, 1, 60, 60);
			}
			else {
				setLED(ui.LED_6, 0, 60, 60);
			}
			break;
		}
		case 6:
		{
			if (Multi_Clothes_Result[i])
			{
				setLED(ui.LED_7, 1, 60, 60);
			}
			else {
				setLED(ui.LED_7, 0, 60, 60);
			}
			break;
		}
		case 7:
		{
			if (Multi_Clothes_Result[i])
			{
				setLED(ui.LED_8, 1, 60, 60);
			}
			else {
				setLED(ui.LED_8, 0, 60, 60);
			}
			break;
		}
		}
	}
	ui.label_video->setPixmap(QPixmap::fromImage(img).scaled(ui.label_video->width(),
		ui.label_video->height(),
		Qt::KeepAspectRatioByExpanding));
}
//设置要连接的相机
void Bandhnu::on_CameraSelectcomboBox_currentIndexChanged(int nIndex)
{
	camera->SetCamera(m_deviceInfoList.pDevInfo[nIndex].cameraKey);
}
//设置触发模式
void Bandhnu::TriggerModecomboBox_currentIndexChanged()
{
	TriggerMode = ui.TriggerModecomboBox->currentIndex();//获得索引
}
//连接
void Bandhnu::pushButtonOpenCam_clicked()
{
	if (camera->CameraOpen()) {
		ui.pushButtonOpenCam->setEnabled(false);
		ui.pushButtonCloseCam->setEnabled(true);
		ui.pushButtonStartCam->setEnabled(true);
		ui.pushButtonStopCam->setEnabled(false);
		ui.CameraSelectcomboBox->setEnabled(false);
	}
}
//断开
void Bandhnu::pushButtonCloseCam_clicked()
{
	pushButtonStopCam_clicked();
	camera->CameraClose();
	ui.pushButtonOpenCam->setEnabled(true);
	ui.pushButtonCloseCam->setEnabled(false);
	ui.pushButtonSoftTrig->setEnabled(false);
	ui.pushButtonStartCam->setEnabled(false);
	ui.pushButtonStopCam->setEnabled(false);
	ui.CameraSelectcomboBox->setEnabled(true);
	ui.frame_2->setDisabled(true);
}
//开始
void Bandhnu::pushButtonStartCam_clicked()
{
	if (TriggerMode == 0)
	{
		//设置外部触发
		ui.pushButtonSoftTrig->setEnabled(false);
		camera->CameraChangeTrig(DahuaCamera::trigLine);
	}
	else if (TriggerMode == 1)
	{
		//设置软件触发
		ui.pushButtonSoftTrig->setEnabled(true);
		camera->CameraChangeTrig(DahuaCamera::trigSoftware);
	}
	else if (TriggerMode == 2)
	{
		//设置连续拉流
		ui.pushButtonSoftTrig->setEnabled(false);
		camera->CameraChangeTrig(DahuaCamera::trigContinous);
	}
	camera->CameraStart();
	ui.pushButtonStartCam->setEnabled(false);
	ui.pushButtonStopCam->setEnabled(true);
}
//停止
void Bandhnu::pushButtonStopCam_clicked()
{
	camera->CameraStop();
	//等待一段时间
	Sleep(1000);
	ui.pushButtonSoftTrig->setEnabled(false);
	ui.pushButtonStartCam->setEnabled(true);
	ui.pushButtonStopCam->setEnabled(false);
}
//软触发
void Bandhnu::pushButtonSoftTrig_clicked()
{
    camera->ExecuteSoftTrig();
}
//判断IP合法性
bool Bandhnu::isIPValid(const QString& ip) {
	QRegularExpression ipRegex("^((25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$");
	QRegularExpressionMatch match = ipRegex.match(ip);
	return match.hasMatch();
}
//获取IP地址
QString Bandhnu::IP_change()
{
	//获取lineedit数据
	QString IP = ui.IP->text();
	if (isIPValid(IP)) {
		//qDebug() << "IP地址有效";
		// IP地址合法
		ui.IP->setStyleSheet("QLineEdit { color: black; }");
		ui.IP->setStyleSheet("QLineEdit{border:1px solid black }");
	}
	else {
		/*qDebug() << "IP地址无效";*/
		// IP地址不合法
		ui.IP->setStyleSheet("QLineEdit { color: red; }");
	}
	return IP;
}
//获取端口号
int Bandhnu::port_change()
{
	bool ok;
	//获取lineedit数据
	QString port_s = ui.port->text();
	int port_i = port_s.toInt(&ok);
	if (port_i <= 0)
	{
		ui.port->setStyleSheet("QLineEdit { color: red; }");
	}
	else
		ui.port->setStyleSheet("QLineEdit{border:1px solid black }");
	return port_i;
}
bool Bandhnu::on_connectPLC_clicked()
{
	if (ConnectPLC == 0)
	{
		QString IP_Q = IP_change();//获取IP

		//QString转换为 const char*
		QByteArray byteArray = IP_Q.toUtf8();
		const char* IP_c = byteArray.constData();
		//qDebug() << "IP_c Value is:" << IP_c;

		int port = port_change();//获取端口号
		//qDebug() << "port Value is:" << port;

		if (IP_Q.isEmpty())
		{
			// 设置LineEdit变为红色
			ui.IP->setStyleSheet("QLineEdit{border:1px solid red }");
			setLED(ui.connectOK, 0, 60, 60);
			return false;
		}
		else
		{
			// 创建一个Modbus TCP/IP连接
			camera->ctx = modbus_new_tcp(IP_c, port);
			if (camera->ctx == NULL)
			{
				//qDebug() << "Unable to create modbus_t object!" << modbus_strerror(errno);
				setLED(ui.connectOK, 0, 60, 60);
				return false;
			}

			// 连接到机器人
			if (modbus_connect(camera->ctx) == -1)
			{
				//qDebug() << "Failed to connect to PLC!" << modbus_strerror(errno);
				setLED(ui.connectOK, 0, 60, 60);
				modbus_free(camera->ctx);
				return false;
			}
			//PLC 连接成功!
			setLED(ui.connectOK, 1, 60, 60);

			ConnectPLC++;
			// 创建一个 QIcon 对象
			QIcon icon("image/disconnect.png");
			// 设置按钮的图标 
			ui.connectPLC->setIcon(icon);
			ui.connectPLC->setText("断开连接");

			ui.IP->setEnabled(false);
			ui.port->setEnabled(false);
			return true;
		}
	}
	else if (ConnectPLC == 1)
	{
		// 断开与PLC的连接
		modbus_close(camera->ctx);
		modbus_free(camera->ctx);
		ui.IP->setEnabled(true);
		ui.port->setEnabled(true);

		ConnectPLC = 0;
		// 创建一个 QIcon 对象
		QIcon icon("image/connect.png");
		// 设置按钮的图标 
		ui.connectPLC->setIcon(icon);
		ui.connectPLC->setText("PLC连接");

		setLED(ui.connectOK, 2, 60, 60);

		return true;
	}
}
