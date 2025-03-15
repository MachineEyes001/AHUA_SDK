/********************************************************************************
** Form generated from reading UI file 'Bandhnu.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANDHNU_H
#define UI_BANDHNU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BandhnuClass
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_7;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout_9;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_15;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QLabel *label_video;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_13;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_3;
    QFrame *frame_7;
    QLabel *label_24;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *TriggerModecomboBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *CameraSelectcomboBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonOpenCam;
    QPushButton *pushButtonStartCam;
    QPushButton *pushButtonStopCam;
    QPushButton *pushButtonCloseCam;
    QPushButton *pushButtonSoftTrig;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_8;
    QLabel *label_12;
    QLabel *label_3;
    QFrame *frame_4;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_6;
    QPushButton *connectOK;
    QGridLayout *gridLayout_3;
    QFrame *line_2;
    QLabel *label_14;
    QLabel *label_13;
    QFrame *line;
    QLineEdit *IP;
    QLineEdit *port;
    QPushButton *connectPLC;
    QFrame *line_3;
    QFrame *frame;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_4;
    QPushButton *LED_1;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_4;
    QPushButton *LED_3;
    QPushButton *LED_6;
    QPushButton *LED_5;
    QLabel *label_9;
    QLabel *label_5;
    QPushButton *LED_2;
    QLabel *label_7;
    QPushButton *LED_4;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *LED_7;
    QPushButton *LED_8;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *BandhnuClass)
    {
        if (BandhnuClass->objectName().isEmpty())
            BandhnuClass->setObjectName("BandhnuClass");
        BandhnuClass->resize(1020, 530);
        BandhnuClass->setMinimumSize(QSize(1020, 530));
        BandhnuClass->setMaximumSize(QSize(16777215, 1000));
        centralWidget = new QWidget(BandhnuClass);
        centralWidget->setObjectName("centralWidget");
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(6, 6, 1006, 534));
        gridLayout_7 = new QGridLayout(layoutWidget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_4, 0, 1, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName("gridLayout_9");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_2, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_9, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_15 = new QGridLayout();
        gridLayout_15->setSpacing(6);
        gridLayout_15->setObjectName("gridLayout_15");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        frame_2 = new QFrame(layoutWidget);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(480, 320));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_video = new QLabel(frame_2);
        label_video->setObjectName("label_video");
        label_video->setGeometry(QRect(0, 0, 480, 320));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_video->sizePolicy().hasHeightForWidth());
        label_video->setSizePolicy(sizePolicy1);
        label_video->setMinimumSize(QSize(480, 320));
        label_video->setStyleSheet(QString::fromUtf8("#frame_2{border:4px solid rgb(0,0,0)}"));
        label_video->setFrameShape(QFrame::Panel);
        label_video->setFrameShadow(QFrame::Sunken);
        label_video->setLineWidth(5);
        label_video->setMidLineWidth(0);

        verticalLayout->addWidget(frame_2);


        gridLayout_15->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_15, 0, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName("gridLayout_12");
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName("gridLayout_13");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        frame_3 = new QFrame(layoutWidget);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(270, 150));
        frame_3->setMaximumSize(QSize(16777215, 150));
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_3->setLineWidth(2);
        frame_7 = new QFrame(frame_3);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(0, 0, 481, 21));
        sizePolicy.setHeightForWidth(frame_7->sizePolicy().hasHeightForWidth());
        frame_7->setSizePolicy(sizePolicy);
        frame_7->setMinimumSize(QSize(0, 0));
        frame_7->setFrameShape(QFrame::Panel);
        frame_7->setFrameShadow(QFrame::Raised);
        frame_7->setLineWidth(2);
        label_24 = new QLabel(frame_7);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(220, 0, 151, 21));
        gridLayoutWidget = new QWidget(frame_3);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 70, 461, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TriggerModecomboBox = new QComboBox(gridLayoutWidget);
        TriggerModecomboBox->addItem(QString());
        TriggerModecomboBox->addItem(QString());
        TriggerModecomboBox->addItem(QString());
        TriggerModecomboBox->setObjectName("TriggerModecomboBox");
        TriggerModecomboBox->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}"));
        TriggerModecomboBox->setEditable(false);

        gridLayout->addWidget(TriggerModecomboBox, 1, 3, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        CameraSelectcomboBox = new QComboBox(gridLayoutWidget);
        CameraSelectcomboBox->setObjectName("CameraSelectcomboBox");
        CameraSelectcomboBox->setMinimumSize(QSize(380, 0));
        CameraSelectcomboBox->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}\n"
""));

        gridLayout->addWidget(CameraSelectcomboBox, 0, 3, 1, 1);

        layoutWidget1 = new QWidget(frame_3);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 20, 461, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonOpenCam = new QPushButton(layoutWidget1);
        pushButtonOpenCam->setObjectName("pushButtonOpenCam");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonOpenCam->sizePolicy().hasHeightForWidth());
        pushButtonOpenCam->setSizePolicy(sizePolicy2);
        pushButtonOpenCam->setMinimumSize(QSize(60, 24));
        pushButtonOpenCam->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"	border-radius:8px;\n"
"  	text-align: center center;\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\346\224\276\345\234\250\346\214\211\351\222\256\344\270\212\346\226\271*/\n"
"QPushButton:hover:enabled {\n"
"	background-color: rgba(255, 255, 255,150);\n"
"	border:2px outset rgba(100, 100, 100,150);\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\347\202\271\345\207\273\346\214\211\351\222\256*/\n"
"QPushButton:pressed:enabled {\n"
"	background-color: rgba(255, 255, 255,255);\n"
"	border:4px outset rgba(100, 100, 100,255);\n"
"}\n"
"\n"
"QPushButton:enabled{ \n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"}\n"
"\n"
"QPushButton:disabled{ \n"
"	color: rgb(150, 150, 150);\n"
"	background-color: rgba(150, 150, 150,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"}"));

        horizontalLayout_2->addWidget(pushButtonOpenCam);

        pushButtonStartCam = new QPushButton(layoutWidget1);
        pushButtonStartCam->setObjectName("pushButtonStartCam");
        pushButtonStartCam->setMinimumSize(QSize(60, 24));
        pushButtonStartCam->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"	border-radius:8px;\n"
"  	text-align: center center;\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\346\224\276\345\234\250\346\214\211\351\222\256\344\270\212\346\226\271*/\n"
"QPushButton:hover:enabled {\n"
"	background-color: rgba(255, 255, 255,150);\n"
"	border:2px outset rgba(100, 100, 100,150);\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\347\202\271\345\207\273\346\214\211\351\222\256*/\n"
"QPushButton:pressed:enabled {\n"
"	background-color: rgba(255, 255, 255,255);\n"
"	border:4px outset rgba(100, 100, 100,255);\n"
"}\n"
"\n"
"QPushButton:enabled{ \n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"}\n"
"\n"
"QPushButton:disabled{ \n"
"	color: rgb(150, 150, 150);\n"
"	background-color: rgba(150, 150, 150,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"}"));

        horizontalLayout_2->addWidget(pushButtonStartCam);

        pushButtonStopCam = new QPushButton(layoutWidget1);
        pushButtonStopCam->setObjectName("pushButtonStopCam");
        pushButtonStopCam->setMinimumSize(QSize(60, 24));
        pushButtonStopCam->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"	border-radius:8px;\n"
"  	text-align: center center;\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\346\224\276\345\234\250\346\214\211\351\222\256\344\270\212\346\226\271*/\n"
"QPushButton:hover:enabled {\n"
"	background-color: rgba(255, 255, 255,150);\n"
"	border:2px outset rgba(100, 100, 100,150);\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\347\202\271\345\207\273\346\214\211\351\222\256*/\n"
"QPushButton:pressed:enabled {\n"
"	background-color: rgba(255, 255, 255,255);\n"
"	border:4px outset rgba(100, 100, 100,255);\n"
"}\n"
"\n"
"QPushButton:enabled{ \n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"}\n"
"\n"
"QPushButton:disabled{ \n"
"	color: rgb(150, 150, 150);\n"
"	background-color: rgba(150, 150, 150,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"}"));

        horizontalLayout_2->addWidget(pushButtonStopCam);

        pushButtonCloseCam = new QPushButton(layoutWidget1);
        pushButtonCloseCam->setObjectName("pushButtonCloseCam");
        pushButtonCloseCam->setMinimumSize(QSize(60, 24));
        pushButtonCloseCam->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"	border-radius:8px;\n"
"  	text-align: center center;\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\346\224\276\345\234\250\346\214\211\351\222\256\344\270\212\346\226\271*/\n"
"QPushButton:hover:enabled {\n"
"	background-color: rgba(255, 255, 255,150);\n"
"	border:2px outset rgba(100, 100, 100,150);\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\347\202\271\345\207\273\346\214\211\351\222\256*/\n"
"QPushButton:pressed:enabled {\n"
"	background-color: rgba(255, 255, 255,255);\n"
"	border:4px outset rgba(100, 100, 100,255);\n"
"}\n"
"\n"
"QPushButton:enabled{ \n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"}\n"
"\n"
"QPushButton:disabled{ \n"
"	color: rgb(150, 150, 150);\n"
"	background-color: rgba(150, 150, 150,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"}"));

        horizontalLayout_2->addWidget(pushButtonCloseCam);

        pushButtonSoftTrig = new QPushButton(layoutWidget1);
        pushButtonSoftTrig->setObjectName("pushButtonSoftTrig");
        pushButtonSoftTrig->setMinimumSize(QSize(60, 24));
        pushButtonSoftTrig->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"	border-radius:8px;\n"
"  	text-align: center center;\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\346\224\276\345\234\250\346\214\211\351\222\256\344\270\212\346\226\271*/\n"
"QPushButton:hover:enabled {\n"
"	background-color: rgba(255, 255, 255,150);\n"
"	border:2px outset rgba(100, 100, 100,150);\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\347\202\271\345\207\273\346\214\211\351\222\256*/\n"
"QPushButton:pressed:enabled {\n"
"	background-color: rgba(255, 255, 255,255);\n"
"	border:4px outset rgba(100, 100, 100,255);\n"
"}\n"
"\n"
"QPushButton:enabled{ \n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"}\n"
"\n"
"QPushButton:disabled{ \n"
"	color: rgb(150, 150, 150);\n"
"	background-color: rgba(150, 150, 150,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"}"));

        horizontalLayout_2->addWidget(pushButtonSoftTrig);


        horizontalLayout->addWidget(frame_3);


        gridLayout_13->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_12->addLayout(gridLayout_13, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_12, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_3, 1, 4, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_3, 2, 3, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName("gridLayout_8");
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");

        gridLayout_8->addWidget(label_12, 0, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777215, 30));

        gridLayout_8->addWidget(label_3, 2, 0, 1, 1);

        frame_4 = new QFrame(layoutWidget);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(470, 80));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_4->setLineWidth(2);
        gridLayoutWidget_3 = new QWidget(frame_4);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(10, 10, 451, 62));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        connectOK = new QPushButton(gridLayoutWidget_3);
        connectOK->setObjectName("connectOK");
        connectOK->setEnabled(false);
        connectOK->setMinimumSize(QSize(60, 60));
        connectOK->setMaximumSize(QSize(40, 16777215));
        connectOK->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 30px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 5px;\n"
"    }\n"
"\n"
"QPushButton:hover {\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
"        );\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background: qradialgradient(\n"
"        cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
"        );\n"
"    }"));

        gridLayout_6->addWidget(connectOK, 0, 3, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName("gridLayout_3");
        line_2 = new QFrame(gridLayoutWidget_3);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_2, 0, 1, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_3);
        label_14->setObjectName("label_14");

        gridLayout_3->addWidget(label_14, 0, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_3);
        label_13->setObjectName("label_13");

        gridLayout_3->addWidget(label_13, 1, 0, 1, 1);

        line = new QFrame(gridLayoutWidget_3);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 1, 1, 1, 1);

        IP = new QLineEdit(gridLayoutWidget_3);
        IP->setObjectName("IP");
        IP->setMinimumSize(QSize(180, 20));
        IP->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}\n"
""));

        gridLayout_3->addWidget(IP, 0, 2, 1, 1);

        port = new QLineEdit(gridLayoutWidget_3);
        port->setObjectName("port");
        port->setMinimumSize(QSize(0, 20));
        port->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}\n"
""));

        gridLayout_3->addWidget(port, 1, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 0, 0, 1, 1);

        connectPLC = new QPushButton(gridLayoutWidget_3);
        connectPLC->setObjectName("connectPLC");
        sizePolicy2.setHeightForWidth(connectPLC->sizePolicy().hasHeightForWidth());
        connectPLC->setSizePolicy(sizePolicy2);
        connectPLC->setMinimumSize(QSize(90, 30));
        connectPLC->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"	border-radius:8px;\n"
"  	text-align: center center;\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\346\224\276\345\234\250\346\214\211\351\222\256\344\270\212\346\226\271*/\n"
"QPushButton:hover:enabled {\n"
"	background-color: rgba(255, 255, 255,150);\n"
"	border:2px outset rgba(100, 100, 100,150);\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\347\202\271\345\207\273\346\214\211\351\222\256*/\n"
"QPushButton:pressed:enabled {\n"
"	background-color: rgba(255, 255, 255,255);\n"
"	border:4px outset rgba(100, 100, 100,255);\n"
"}\n"
"\n"
"QPushButton:enabled{ \n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"}\n"
"\n"
"QPushButton:disabled{ \n"
"	color: rgb(150, 150, 150);\n"
"	background-color: rgba(150, 150, 150,0);\n"
"	border:2px outset rgb(100, 100, 100);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("image/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        connectPLC->setIcon(icon);
        connectPLC->setIconSize(QSize(20, 20));

        gridLayout_6->addWidget(connectPLC, 0, 2, 1, 1);

        line_3 = new QFrame(gridLayoutWidget_3);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_3, 0, 1, 1, 1);


        gridLayout_8->addWidget(frame_4, 1, 0, 1, 1);

        frame = new QFrame(layoutWidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(140, 200));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(2);
        layoutWidget2 = new QWidget(frame);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 10, 449, 181));
        gridLayout_4 = new QGridLayout(layoutWidget2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        LED_1 = new QPushButton(layoutWidget2);
        LED_1->setObjectName("LED_1");
        LED_1->setEnabled(false);
        LED_1->setMinimumSize(QSize(60, 60));
        LED_1->setMaximumSize(QSize(40, 16777215));
        LED_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 30px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 5px;\n"
"    }\n"
"\n"
"QPushButton:hover {\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
"        );\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background: qradialgradient(\n"
"        cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
"        );\n"
"    }"));

        gridLayout_4->addWidget(LED_1, 1, 0, 1, 1);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName("label_6");

        gridLayout_4->addWidget(label_6, 0, 2, 1, 1);

        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName("label_8");

        gridLayout_4->addWidget(label_8, 4, 0, 1, 1);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName("label_4");

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        LED_3 = new QPushButton(layoutWidget2);
        LED_3->setObjectName("LED_3");
        LED_3->setEnabled(false);
        LED_3->setMinimumSize(QSize(60, 60));
        LED_3->setMaximumSize(QSize(40, 16777215));
        LED_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 30px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 5px;\n"
"    }\n"
"\n"
"QPushButton:hover {\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
"        );\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background: qradialgradient(\n"
"        cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
"        );\n"
"    }"));

        gridLayout_4->addWidget(LED_3, 1, 2, 1, 1);

        LED_6 = new QPushButton(layoutWidget2);
        LED_6->setObjectName("LED_6");
        LED_6->setEnabled(false);
        LED_6->setMinimumSize(QSize(60, 60));
        LED_6->setMaximumSize(QSize(40, 16777215));
        LED_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 30px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 5px;\n"
"    }\n"
"\n"
"QPushButton:hover {\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
"        );\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background: qradialgradient(\n"
"        cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
"        );\n"
"    }"));

        gridLayout_4->addWidget(LED_6, 5, 1, 1, 1);

        LED_5 = new QPushButton(layoutWidget2);
        LED_5->setObjectName("LED_5");
        LED_5->setEnabled(false);
        LED_5->setMinimumSize(QSize(60, 60));
        LED_5->setMaximumSize(QSize(40, 16777215));
        LED_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 30px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 5px;\n"
"    }\n"
"\n"
"QPushButton:hover {\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
"        );\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background: qradialgradient(\n"
"        cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
"        );\n"
"    }"));

        gridLayout_4->addWidget(LED_5, 5, 0, 1, 1);

        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName("label_9");

        gridLayout_4->addWidget(label_9, 4, 1, 1, 1);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");

        gridLayout_4->addWidget(label_5, 0, 1, 1, 1);

        LED_2 = new QPushButton(layoutWidget2);
        LED_2->setObjectName("LED_2");
        LED_2->setEnabled(false);
        LED_2->setMinimumSize(QSize(60, 60));
        LED_2->setMaximumSize(QSize(40, 16777215));
        LED_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 30px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 5px;\n"
"    }\n"
"\n"
"QPushButton:hover {\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
"        );\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background: qradialgradient(\n"
"        cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
"        );\n"
"    }"));

        gridLayout_4->addWidget(LED_2, 1, 1, 1, 1);

        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName("label_7");

        gridLayout_4->addWidget(label_7, 0, 3, 1, 1);

        LED_4 = new QPushButton(layoutWidget2);
        LED_4->setObjectName("LED_4");
        LED_4->setEnabled(false);
        LED_4->setMinimumSize(QSize(60, 60));
        LED_4->setMaximumSize(QSize(40, 16777215));
        LED_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 30px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 5px;\n"
"    }\n"
"\n"
"QPushButton:hover {\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
"        );\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background: qradialgradient(\n"
"        cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
"        );\n"
"    }"));

        gridLayout_4->addWidget(LED_4, 1, 3, 1, 1);

        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName("label_10");

        gridLayout_4->addWidget(label_10, 4, 2, 1, 1);

        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName("label_11");

        gridLayout_4->addWidget(label_11, 4, 3, 1, 1);

        LED_7 = new QPushButton(layoutWidget2);
        LED_7->setObjectName("LED_7");
        LED_7->setEnabled(false);
        LED_7->setMinimumSize(QSize(60, 60));
        LED_7->setMaximumSize(QSize(40, 16777215));
        LED_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 30px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 5px;\n"
"    }\n"
"\n"
"QPushButton:hover {\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
"        );\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background: qradialgradient(\n"
"        cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
"        );\n"
"    }"));

        gridLayout_4->addWidget(LED_7, 5, 2, 1, 1);

        LED_8 = new QPushButton(layoutWidget2);
        LED_8->setObjectName("LED_8");
        LED_8->setEnabled(false);
        LED_8->setMinimumSize(QSize(60, 60));
        LED_8->setMaximumSize(QSize(40, 16777215));
        LED_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 30px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 5px;\n"
"    }\n"
"\n"
"QPushButton:hover {\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
"        );\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background: qradialgradient(\n"
"        cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
"        );\n"
"    }"));

        gridLayout_4->addWidget(LED_8, 5, 3, 1, 1);


        gridLayout_8->addWidget(frame, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer, 4, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_8, 1, 3, 1, 1);

        BandhnuClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BandhnuClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1020, 17));
        BandhnuClass->setMenuBar(menuBar);

        retranslateUi(BandhnuClass);
        QObject::connect(pushButtonOpenCam, SIGNAL(clicked()), BandhnuClass, SLOT(pushButtonOpenCam_clicked()));
        QObject::connect(pushButtonStopCam, SIGNAL(clicked()), BandhnuClass, SLOT(pushButtonStopCam_clicked()));
        QObject::connect(pushButtonSoftTrig, SIGNAL(clicked()), BandhnuClass, SLOT(pushButtonSoftTrig_clicked()));
        QObject::connect(pushButtonStartCam, SIGNAL(clicked()), BandhnuClass, SLOT(pushButtonStartCam_clicked()));
        QObject::connect(pushButtonCloseCam, SIGNAL(clicked()), BandhnuClass, SLOT(pushButtonCloseCam_clicked()));
        QObject::connect(TriggerModecomboBox, SIGNAL(currentIndexChanged(int)), BandhnuClass, SLOT(TriggerModecomboBox_currentIndexChanged()));

        CameraSelectcomboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(BandhnuClass);
    } // setupUi

    void retranslateUi(QMainWindow *BandhnuClass)
    {
        BandhnuClass->setWindowTitle(QCoreApplication::translate("BandhnuClass", "Bandhnu", nullptr));
        label_video->setText(QString());
        label_24->setText(QCoreApplication::translate("BandhnuClass", "\347\233\270\346\234\272", nullptr));
        TriggerModecomboBox->setItemText(0, QCoreApplication::translate("BandhnuClass", "\345\244\226\351\203\250\350\247\246\345\217\221", nullptr));
        TriggerModecomboBox->setItemText(1, QCoreApplication::translate("BandhnuClass", "\350\275\257\344\273\266\350\247\246\345\217\221", nullptr));
        TriggerModecomboBox->setItemText(2, QCoreApplication::translate("BandhnuClass", "\350\277\236\347\273\255\351\207\207\351\233\206", nullptr));

        label->setText(QCoreApplication::translate("BandhnuClass", "\347\233\270\346\234\272\351\200\211\346\213\251\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("BandhnuClass", "\350\247\246\345\217\221\346\250\241\345\274\217\357\274\232", nullptr));
        pushButtonOpenCam->setText(QCoreApplication::translate("BandhnuClass", "\346\211\223\345\274\200\347\233\270\346\234\272", nullptr));
        pushButtonStartCam->setText(QCoreApplication::translate("BandhnuClass", "\345\274\200\345\247\213", nullptr));
        pushButtonStopCam->setText(QCoreApplication::translate("BandhnuClass", "\345\201\234\346\255\242", nullptr));
        pushButtonCloseCam->setText(QCoreApplication::translate("BandhnuClass", "\345\205\263\351\227\255\347\233\270\346\234\272", nullptr));
        pushButtonSoftTrig->setText(QCoreApplication::translate("BandhnuClass", "\350\275\257\344\273\266\350\247\246\345\217\221", nullptr));
        label_12->setText(QCoreApplication::translate("BandhnuClass", "<html><head/><body><p align=\"center\">\351\200\232\350\256\257\350\256\276\347\275\256</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("BandhnuClass", "<html><head/><body><p align=\"center\">\347\273\223\346\236\234\346\230\276\347\244\272</p></body></html>", nullptr));
        connectOK->setText(QString());
        label_14->setText(QCoreApplication::translate("BandhnuClass", "IP  ", nullptr));
        label_13->setText(QCoreApplication::translate("BandhnuClass", "\347\253\257\345\217\243\345\217\267  ", nullptr));
        connectPLC->setText(QCoreApplication::translate("BandhnuClass", "PLC\350\277\236\346\216\245", nullptr));
        LED_1->setText(QString());
        label_6->setText(QCoreApplication::translate("BandhnuClass", "<html><head/><body><p align=\"center\">\346\226\2313</p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("BandhnuClass", "<html><head/><body><p align=\"center\">\346\226\2315</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("BandhnuClass", "<html><head/><body><p align=\"center\">\346\226\2311</p></body></html>", nullptr));
        LED_3->setText(QString());
        LED_6->setText(QString());
        LED_5->setText(QString());
        label_9->setText(QCoreApplication::translate("BandhnuClass", "<html><head/><body><p align=\"center\">\346\226\2316</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("BandhnuClass", "<html><head/><body><p align=\"center\">\346\226\2312</p></body></html>", nullptr));
        LED_2->setText(QString());
        label_7->setText(QCoreApplication::translate("BandhnuClass", "<html><head/><body><p align=\"center\">\346\226\2314</p></body></html>", nullptr));
        LED_4->setText(QString());
        label_10->setText(QCoreApplication::translate("BandhnuClass", "<html><head/><body><p align=\"center\">\346\226\2317</p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("BandhnuClass", "<html><head/><body><p align=\"center\">\346\226\2318</p></body></html>", nullptr));
        LED_7->setText(QString());
        LED_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BandhnuClass: public Ui_BandhnuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANDHNU_H
