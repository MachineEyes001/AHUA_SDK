#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <QtWidgets/QMainWindow>
#include <QTimer>
#include <QSettings>
#include "DahuaCamera.h"
#include "ui_Bandhnu.h"

class Bandhnu : public QMainWindow
{
    Q_OBJECT

public:
    Bandhnu(QWidget* parent = nullptr);
    ~Bandhnu();
    DahuaCamera* camera;

private:
    Ui::BandhnuClass ui;
    int TriggerMode = 0;
    void initUi();
    bool isIPValid(const QString& ip);

private slots:
    //相机1
    void pushButtonOpenCam_clicked();
    void pushButtonStartCam_clicked();
    void pushButtonStopCam_clicked();
    void pushButtonCloseCam_clicked();
    void pushButtonSoftTrig_clicked();
    void on_CameraSelectcomboBox_currentIndexChanged(int nIndex);
    void TriggerModecomboBox_currentIndexChanged();
    bool on_connectPLC_clicked();
    QString IP_change();
    int port_change();
    /*void showImage(const QImage& img);*/

public slots:
    void showImage(const QImage& img, std::vector<bool> Multi_Clothes_Result);

private:
    IMV_DeviceList m_deviceInfoList;	// 发现的相机列表
};
