#include "MAINWIN.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // ��ȡD�̸�·��
    QString dPath = "D:";
    // ����Log�ļ���
    QString LogPath = dPath + "/Log";
    QDir LogDir(LogPath);
    if (!LogDir.exists())
    {
        LogDir.mkpath(".");
    }
    // ����BarScanIMG�ļ���
    QString barScanImgPath = dPath + "/BarScanIMG";
    QDir barScanImgDir(barScanImgPath);
    if (!barScanImgDir.exists())
    {
        barScanImgDir.mkpath(".");
    }
    // ��BarScanIMG�ļ����´���OK�ļ���
    QString okPath = barScanImgPath + "/OK";
    QDir okDir(okPath);
    if (!okDir.exists())
    {
        okDir.mkpath(".");
    }
    // ��BarScanIMG�ļ����´���NG�ļ���
    QString ngPath = barScanImgPath + "/NG";
    QDir ngDir(ngPath);
    if (!ngDir.exists())
    {
        ngDir.mkpath(".");
    }
    // ��BarScanIMG�ļ����´���inside�ļ���
    QString insidePath = barScanImgPath + "/INSIDE";
    QDir insideDir(insidePath);
    if (!insideDir.exists())
    {
        insideDir.mkpath(".");
    }
    // ��BarScanIMG�ļ����´���RFID�ļ���
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
