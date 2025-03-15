/********************************************************************************
** Form generated from reading UI file 'Keyboard.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARD_H
#define UI_KEYBOARD_H

#include <QtCore/QVariant>
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

class Ui_KeyboardClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_17;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_9;
    QFrame *frame_9;
    QFrame *frame_8;
    QLabel *label_26;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QLineEdit *port;
    QLabel *label_4;
    QPushButton *comm_Botton;
    QLineEdit *IP;
    QPushButton *connectOK;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_14;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QFrame *frame_6;
    QLabel *label_21;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonOpenCam_2;
    QPushButton *pushButtonStartCam_2;
    QPushButton *pushButtonStopCam_2;
    QPushButton *pushButtonCloseCam_2;
    QPushButton *pushButtonSoftTrig_2;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_8;
    QComboBox *TriggerModecomboBox_2;
    QComboBox *CameraSelectcomboBox_2;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *LED_2;
    QLabel *label_8;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_14;
    QLabel *label_29;
    QLineEdit *camera2_X;
    QLineEdit *camera2_Y;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_31;
    QLabel *label_30;
    QSpacerItem *verticalSpacer_13;
    QLineEdit *camera2_R;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout_15;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QLabel *label_video;
    QGridLayout *gridLayout_16;
    QGridLayout *gridLayout_10;
    QFrame *frame_4;
    QLabel *label_video_2;
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
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_11;
    QPushButton *LED_1;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_23;
    QLineEdit *camera1_X;
    QLineEdit *camera1_Y;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_25;
    QLineEdit *camera1_R;
    QLabel *label_22;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_11;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *KeyboardClass)
    {
        if (KeyboardClass->objectName().isEmpty())
            KeyboardClass->setObjectName("KeyboardClass");
        KeyboardClass->resize(1000, 680);
        KeyboardClass->setMinimumSize(QSize(1000, 620));
        KeyboardClass->setMaximumSize(QSize(16777215, 1000));
        centralWidget = new QWidget(KeyboardClass);
        centralWidget->setObjectName("centralWidget");
        gridLayout_17 = new QGridLayout(centralWidget);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName("gridLayout_17");
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName("gridLayout_7");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName("gridLayout_9");
        frame_9 = new QFrame(centralWidget);
        frame_9->setObjectName("frame_9");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_9->sizePolicy().hasHeightForWidth());
        frame_9->setSizePolicy(sizePolicy);
        frame_9->setMinimumSize(QSize(0, 67));
        frame_9->setFrameShape(QFrame::Panel);
        frame_9->setFrameShadow(QFrame::Raised);
        frame_9->setLineWidth(2);
        frame_8 = new QFrame(frame_9);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(0, 0, 981, 20));
        sizePolicy.setHeightForWidth(frame_8->sizePolicy().hasHeightForWidth());
        frame_8->setSizePolicy(sizePolicy);
        frame_8->setMinimumSize(QSize(0, 20));
        frame_8->setFrameShape(QFrame::Panel);
        frame_8->setFrameShadow(QFrame::Raised);
        frame_8->setLineWidth(2);
        label_26 = new QLabel(frame_8);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(480, 0, 31, 21));
        label_26->setMinimumSize(QSize(0, 20));
        layoutWidget = new QWidget(frame_9);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 951, 45));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        gridLayout_4->addWidget(label_5, 0, 4, 1, 1);

        port = new QLineEdit(layoutWidget);
        port->setObjectName("port");
        port->setMinimumSize(QSize(50, 0));
        port->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}\n"
""));

        gridLayout_4->addWidget(port, 0, 5, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        gridLayout_4->addWidget(label_4, 0, 2, 1, 1);

        comm_Botton = new QPushButton(layoutWidget);
        comm_Botton->setObjectName("comm_Botton");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comm_Botton->sizePolicy().hasHeightForWidth());
        comm_Botton->setSizePolicy(sizePolicy1);
        comm_Botton->setMinimumSize(QSize(80, 24));
        comm_Botton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_4->addWidget(comm_Botton, 0, 6, 1, 1);

        IP = new QLineEdit(layoutWidget);
        IP->setObjectName("IP");
        IP->setMinimumSize(QSize(160, 0));
        IP->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}\n"
""));

        gridLayout_4->addWidget(IP, 0, 3, 1, 1);

        connectOK = new QPushButton(layoutWidget);
        connectOK->setObjectName("connectOK");
        connectOK->setEnabled(false);
        connectOK->setMinimumSize(QSize(40, 40));
        connectOK->setMaximumSize(QSize(40, 16777215));
        connectOK->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px;\n"
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

        gridLayout_4->addWidget(connectOK, 0, 7, 1, 1);


        gridLayout_9->addWidget(frame_9, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_9, 2, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName("gridLayout_14");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        frame = new QFrame(centralWidget);
        frame->setObjectName("frame");
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(431, 230));
        frame->setMaximumSize(QSize(16777215, 350));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(2);
        frame_6 = new QFrame(frame);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(0, 0, 481, 21));
        sizePolicy.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy);
        frame_6->setFrameShape(QFrame::Panel);
        frame_6->setFrameShadow(QFrame::Raised);
        frame_6->setLineWidth(2);
        label_21 = new QLabel(frame_6);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(220, 0, 131, 21));
        layoutWidget_2 = new QWidget(frame);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 20, 461, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButtonOpenCam_2 = new QPushButton(layoutWidget_2);
        pushButtonOpenCam_2->setObjectName("pushButtonOpenCam_2");
        sizePolicy1.setHeightForWidth(pushButtonOpenCam_2->sizePolicy().hasHeightForWidth());
        pushButtonOpenCam_2->setSizePolicy(sizePolicy1);
        pushButtonOpenCam_2->setMinimumSize(QSize(60, 24));
        pushButtonOpenCam_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_4->addWidget(pushButtonOpenCam_2);

        pushButtonStartCam_2 = new QPushButton(layoutWidget_2);
        pushButtonStartCam_2->setObjectName("pushButtonStartCam_2");
        pushButtonStartCam_2->setMinimumSize(QSize(60, 24));
        pushButtonStartCam_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_4->addWidget(pushButtonStartCam_2);

        pushButtonStopCam_2 = new QPushButton(layoutWidget_2);
        pushButtonStopCam_2->setObjectName("pushButtonStopCam_2");
        pushButtonStopCam_2->setMinimumSize(QSize(60, 24));
        pushButtonStopCam_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_4->addWidget(pushButtonStopCam_2);

        pushButtonCloseCam_2 = new QPushButton(layoutWidget_2);
        pushButtonCloseCam_2->setObjectName("pushButtonCloseCam_2");
        pushButtonCloseCam_2->setMinimumSize(QSize(60, 24));
        pushButtonCloseCam_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_4->addWidget(pushButtonCloseCam_2);

        pushButtonSoftTrig_2 = new QPushButton(layoutWidget_2);
        pushButtonSoftTrig_2->setObjectName("pushButtonSoftTrig_2");
        pushButtonSoftTrig_2->setMinimumSize(QSize(60, 24));
        pushButtonSoftTrig_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_4->addWidget(pushButtonSoftTrig_2);

        gridLayoutWidget_6 = new QWidget(frame);
        gridLayoutWidget_6->setObjectName("gridLayoutWidget_6");
        gridLayoutWidget_6->setGeometry(QRect(10, 60, 461, 81));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        TriggerModecomboBox_2 = new QComboBox(gridLayoutWidget_6);
        TriggerModecomboBox_2->addItem(QString());
        TriggerModecomboBox_2->addItem(QString());
        TriggerModecomboBox_2->addItem(QString());
        TriggerModecomboBox_2->setObjectName("TriggerModecomboBox_2");
        TriggerModecomboBox_2->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}"));
        TriggerModecomboBox_2->setEditable(false);

        gridLayout_8->addWidget(TriggerModecomboBox_2, 1, 3, 1, 1);

        CameraSelectcomboBox_2 = new QComboBox(gridLayoutWidget_6);
        CameraSelectcomboBox_2->setObjectName("CameraSelectcomboBox_2");
        CameraSelectcomboBox_2->setMinimumSize(QSize(380, 0));
        CameraSelectcomboBox_2->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}\n"
""));

        gridLayout_8->addWidget(CameraSelectcomboBox_2, 0, 3, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_6);
        label_9->setObjectName("label_9");

        gridLayout_8->addWidget(label_9, 0, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_6);
        label_10->setObjectName("label_10");

        gridLayout_8->addWidget(label_10, 1, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(frame);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(10, 140, 461, 101));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        LED_2 = new QPushButton(gridLayoutWidget_2);
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

        gridLayout_2->addWidget(LED_2, 1, 2, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName("gridLayout_6");
        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_14, 6, 1, 1, 1);

        label_29 = new QLabel(gridLayoutWidget_2);
        label_29->setObjectName("label_29");

        gridLayout_6->addWidget(label_29, 1, 0, 1, 1);

        camera2_X = new QLineEdit(gridLayoutWidget_2);
        camera2_X->setObjectName("camera2_X");
        camera2_X->setMinimumSize(QSize(200, 0));
        camera2_X->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}\n"
""));

        gridLayout_6->addWidget(camera2_X, 1, 1, 1, 1);

        camera2_Y = new QLineEdit(gridLayoutWidget_2);
        camera2_Y->setObjectName("camera2_Y");
        camera2_Y->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}\n"
""));

        gridLayout_6->addWidget(camera2_Y, 3, 1, 1, 1);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_15, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 2, 0, 1, 1);

        label_31 = new QLabel(gridLayoutWidget_2);
        label_31->setObjectName("label_31");

        gridLayout_6->addWidget(label_31, 5, 0, 1, 1);

        label_30 = new QLabel(gridLayoutWidget_2);
        label_30->setObjectName("label_30");

        gridLayout_6->addWidget(label_30, 3, 0, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_13, 0, 1, 1, 1);

        camera2_R = new QLineEdit(gridLayoutWidget_2);
        camera2_R->setObjectName("camera2_R");
        camera2_R->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}\n"
""));

        gridLayout_6->addWidget(camera2_R, 5, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_4, 4, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_6, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_6, 1, 1, 1, 1);


        verticalLayout_4->addWidget(frame);


        gridLayout_14->addLayout(verticalLayout_4, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_14, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_8, 1, 1, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setSpacing(6);
        gridLayout_15->setObjectName("gridLayout_15");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName("frame_2");
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(480, 320));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_video = new QLabel(frame_2);
        label_video->setObjectName("label_video");
        label_video->setGeometry(QRect(0, 0, 480, 320));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_video->sizePolicy().hasHeightForWidth());
        label_video->setSizePolicy(sizePolicy2);
        label_video->setMinimumSize(QSize(480, 320));
        label_video->setStyleSheet(QString::fromUtf8("#frame_2{border:4px solid rgb(0,0,0)}"));
        label_video->setFrameShape(QFrame::Panel);
        label_video->setFrameShadow(QFrame::Sunken);
        label_video->setLineWidth(5);
        label_video->setMidLineWidth(0);

        verticalLayout->addWidget(frame_2);


        gridLayout_15->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_15, 0, 0, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName("gridLayout_16");
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName("gridLayout_10");
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName("frame_4");
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setMinimumSize(QSize(480, 320));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_video_2 = new QLabel(frame_4);
        label_video_2->setObjectName("label_video_2");
        label_video_2->setGeometry(QRect(0, 0, 480, 320));
        sizePolicy2.setHeightForWidth(label_video_2->sizePolicy().hasHeightForWidth());
        label_video_2->setSizePolicy(sizePolicy2);
        label_video_2->setMinimumSize(QSize(480, 320));
        label_video_2->setStyleSheet(QString::fromUtf8("#frame_2{border:4px solid rgb(0,0,0)}"));
        label_video_2->setFrameShape(QFrame::Panel);
        label_video_2->setFrameShadow(QFrame::Sunken);
        label_video_2->setLineWidth(5);
        label_video_2->setMidLineWidth(0);

        gridLayout_10->addWidget(frame_4, 1, 0, 1, 1);


        gridLayout_16->addLayout(gridLayout_10, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_16, 0, 2, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName("gridLayout_12");
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName("gridLayout_13");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(270, 250));
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
        gridLayoutWidget->setGeometry(QRect(10, 60, 461, 81));
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
        sizePolicy1.setHeightForWidth(pushButtonOpenCam->sizePolicy().hasHeightForWidth());
        pushButtonOpenCam->setSizePolicy(sizePolicy1);
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

        gridLayoutWidget_7 = new QWidget(frame_3);
        gridLayoutWidget_7->setObjectName("gridLayoutWidget_7");
        gridLayoutWidget_7->setGeometry(QRect(10, 140, 461, 101));
        gridLayout_11 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName("gridLayout_11");
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        LED_1 = new QPushButton(gridLayoutWidget_7);
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

        gridLayout_11->addWidget(LED_1, 0, 2, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 4, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_9, 6, 1, 1, 1);

        label_23 = new QLabel(gridLayoutWidget_7);
        label_23->setObjectName("label_23");

        gridLayout_3->addWidget(label_23, 3, 0, 1, 1);

        camera1_X = new QLineEdit(gridLayoutWidget_7);
        camera1_X->setObjectName("camera1_X");
        camera1_X->setMinimumSize(QSize(200, 0));
        camera1_X->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}\n"
""));

        gridLayout_3->addWidget(camera1_X, 1, 1, 1, 1);

        camera1_Y = new QLineEdit(gridLayoutWidget_7);
        camera1_Y->setObjectName("camera1_Y");
        camera1_Y->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}\n"
""));

        gridLayout_3->addWidget(camera1_Y, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_8, 0, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_7, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 4, 0, 1, 1);

        label_25 = new QLabel(gridLayoutWidget_7);
        label_25->setObjectName("label_25");

        gridLayout_3->addWidget(label_25, 5, 0, 1, 1);

        camera1_R = new QLineEdit(gridLayoutWidget_7);
        camera1_R->setObjectName("camera1_R");
        camera1_R->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}\n"
""));

        gridLayout_3->addWidget(camera1_R, 5, 1, 1, 1);

        label_22 = new QLabel(gridLayoutWidget_7);
        label_22->setObjectName("label_22");

        gridLayout_3->addWidget(label_22, 1, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_3, 0, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_7);
        label_7->setObjectName("label_7");

        gridLayout_11->addWidget(label_7, 0, 0, 1, 1);


        horizontalLayout->addWidget(frame_3);


        gridLayout_13->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_12->addLayout(gridLayout_13, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_12, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_10, 1, 1, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_11, 3, 1, 1, 1);


        gridLayout_17->addLayout(gridLayout_7, 0, 0, 1, 1);

        KeyboardClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(KeyboardClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1000, 17));
        KeyboardClass->setMenuBar(menuBar);

        retranslateUi(KeyboardClass);
        QObject::connect(pushButtonOpenCam, SIGNAL(clicked()), KeyboardClass, SLOT(pushButtonOpenCam_clicked()));
        QObject::connect(pushButtonStopCam, SIGNAL(clicked()), KeyboardClass, SLOT(pushButtonStopCam_clicked()));
        QObject::connect(pushButtonSoftTrig, SIGNAL(clicked()), KeyboardClass, SLOT(pushButtonSoftTrig_clicked()));
        QObject::connect(pushButtonStartCam, SIGNAL(clicked()), KeyboardClass, SLOT(pushButtonStartCam_clicked()));
        QObject::connect(pushButtonCloseCam, SIGNAL(clicked()), KeyboardClass, SLOT(pushButtonCloseCam_clicked()));
        QObject::connect(TriggerModecomboBox, SIGNAL(currentIndexChanged(int)), KeyboardClass, SLOT(TriggerModecomboBox_currentIndexChanged()));
        QObject::connect(IP, SIGNAL(editingFinished()), KeyboardClass, SLOT(IP_change()));
        QObject::connect(port, SIGNAL(editingFinished()), KeyboardClass, SLOT(port_change()));

        CameraSelectcomboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(KeyboardClass);
    } // setupUi

    void retranslateUi(QMainWindow *KeyboardClass)
    {
        KeyboardClass->setWindowTitle(QCoreApplication::translate("KeyboardClass", "\350\247\243\347\240\201", nullptr));
        label_26->setText(QCoreApplication::translate("KeyboardClass", "\351\200\232\350\256\257", nullptr));
        label_5->setText(QCoreApplication::translate("KeyboardClass", "  \347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("KeyboardClass", "  IP\357\274\232", nullptr));
        comm_Botton->setText(QCoreApplication::translate("KeyboardClass", "\351\200\232\350\256\257\350\277\236\346\216\245", nullptr));
        connectOK->setText(QString());
        label_21->setText(QCoreApplication::translate("KeyboardClass", "\347\233\270\346\234\2722", nullptr));
        pushButtonOpenCam_2->setText(QCoreApplication::translate("KeyboardClass", "\346\211\223\345\274\200\347\233\270\346\234\272", nullptr));
        pushButtonStartCam_2->setText(QCoreApplication::translate("KeyboardClass", "\345\274\200\345\247\213", nullptr));
        pushButtonStopCam_2->setText(QCoreApplication::translate("KeyboardClass", "\345\201\234\346\255\242", nullptr));
        pushButtonCloseCam_2->setText(QCoreApplication::translate("KeyboardClass", "\345\205\263\351\227\255\347\233\270\346\234\272", nullptr));
        pushButtonSoftTrig_2->setText(QCoreApplication::translate("KeyboardClass", "\350\275\257\344\273\266\350\247\246\345\217\221", nullptr));
        TriggerModecomboBox_2->setItemText(0, QCoreApplication::translate("KeyboardClass", "\345\244\226\351\203\250\350\247\246\345\217\221", nullptr));
        TriggerModecomboBox_2->setItemText(1, QCoreApplication::translate("KeyboardClass", "\350\275\257\344\273\266\350\247\246\345\217\221", nullptr));
        TriggerModecomboBox_2->setItemText(2, QCoreApplication::translate("KeyboardClass", "\350\277\236\347\273\255\351\207\207\351\233\206", nullptr));

        label_9->setText(QCoreApplication::translate("KeyboardClass", "\347\233\270\346\234\272\351\200\211\346\213\251\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("KeyboardClass", "\350\247\246\345\217\221\346\250\241\345\274\217\357\274\232", nullptr));
        LED_2->setText(QString());
        label_8->setText(QCoreApplication::translate("KeyboardClass", "\346\225\260\346\215\256\357\274\232", nullptr));
        label_29->setText(QCoreApplication::translate("KeyboardClass", "X\357\274\232", nullptr));
        label_31->setText(QCoreApplication::translate("KeyboardClass", "R\357\274\232", nullptr));
        label_30->setText(QCoreApplication::translate("KeyboardClass", "Y\357\274\232", nullptr));
        label_video->setText(QString());
        label_video_2->setText(QString());
        label_24->setText(QCoreApplication::translate("KeyboardClass", "\347\233\270\346\234\2721", nullptr));
        TriggerModecomboBox->setItemText(0, QCoreApplication::translate("KeyboardClass", "\345\244\226\351\203\250\350\247\246\345\217\221", nullptr));
        TriggerModecomboBox->setItemText(1, QCoreApplication::translate("KeyboardClass", "\350\275\257\344\273\266\350\247\246\345\217\221", nullptr));
        TriggerModecomboBox->setItemText(2, QCoreApplication::translate("KeyboardClass", "\350\277\236\347\273\255\351\207\207\351\233\206", nullptr));

        label->setText(QCoreApplication::translate("KeyboardClass", "\347\233\270\346\234\272\351\200\211\346\213\251\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("KeyboardClass", "\350\247\246\345\217\221\346\250\241\345\274\217\357\274\232", nullptr));
        pushButtonOpenCam->setText(QCoreApplication::translate("KeyboardClass", "\346\211\223\345\274\200\347\233\270\346\234\272", nullptr));
        pushButtonStartCam->setText(QCoreApplication::translate("KeyboardClass", "\345\274\200\345\247\213", nullptr));
        pushButtonStopCam->setText(QCoreApplication::translate("KeyboardClass", "\345\201\234\346\255\242", nullptr));
        pushButtonCloseCam->setText(QCoreApplication::translate("KeyboardClass", "\345\205\263\351\227\255\347\233\270\346\234\272", nullptr));
        pushButtonSoftTrig->setText(QCoreApplication::translate("KeyboardClass", "\350\275\257\344\273\266\350\247\246\345\217\221", nullptr));
        LED_1->setText(QString());
        label_23->setText(QCoreApplication::translate("KeyboardClass", "Y\357\274\232", nullptr));
        label_25->setText(QCoreApplication::translate("KeyboardClass", "R\357\274\232", nullptr));
        label_22->setText(QCoreApplication::translate("KeyboardClass", "X\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("KeyboardClass", "\346\225\260\346\215\256\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KeyboardClass: public Ui_KeyboardClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARD_H
