#include "MAINWIN.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 获取D盘根路径
    QString dPath = "D:";
    // 创建Log文件夹
    QString LogPath = dPath + "/Log";
    QDir LogDir(LogPath);
    if (!LogDir.exists())
    {
        LogDir.mkpath(".");
    }
    // 创建BarScanIMG文件夹
    QString barScanImgPath = dPath + "/BarScanIMG";
    QDir barScanImgDir(barScanImgPath);
    if (!barScanImgDir.exists())
    {
        barScanImgDir.mkpath(".");
    }
    // 在BarScanIMG文件夹下创建OK文件夹
    QString okPath = barScanImgPath + "/OK";
    QDir okDir(okPath);
    if (!okDir.exists())
    {
        okDir.mkpath(".");
    }
    // 在BarScanIMG文件夹下创建NG文件夹
    QString ngPath = barScanImgPath + "/NG";
    QDir ngDir(ngPath);
    if (!ngDir.exists())
    {
        ngDir.mkpath(".");
    }
    // 在BarScanIMG文件夹下创建inside文件夹
    QString insidePath = barScanImgPath + "/INSIDE";
    QDir insideDir(insidePath);
    if (!insideDir.exists())
    {
        insideDir.mkpath(".");
    }
    // 在BarScanIMG文件夹下创建RFID文件夹
    QString RFIDPath = barScanImgPath + "/RFID";
    QDir RFIDDir(RFIDPath);
    if (!RFIDDir.exists())
    {
        RFIDDir.mkpath(".");
    }

    MAINWIN win;
    win.show();

    return a.exec();
}
