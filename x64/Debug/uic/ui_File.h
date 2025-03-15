/********************************************************************************
** Form generated from reading UI file 'File.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_H
#define UI_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *INSIDEPath_pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *Log_lineEdit;
    QPushButton *RFIDPath_pushButton;
    QPushButton *NGPath_pushButton;
    QLineEdit *RFID_lineEdit;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_5;
    QPushButton *OKPath_pushButton;
    QLineEdit *OK_lineEdit;
    QLabel *label_7;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *SaveTime_lineEdit;
    QPushButton *LogPath_pushButton;
    QLineEdit *NG_lineEdit;
    QLineEdit *INSIDE_lineEdit;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *FileClass)
    {
        if (FileClass->objectName().isEmpty())
            FileClass->setObjectName("FileClass");
        FileClass->resize(296, 276);
        FileClass->setMinimumSize(QSize(296, 150));
        FileClass->setMaximumSize(QSize(300, 300));
        centralWidget = new QWidget(FileClass);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setStyleSheet(QString::fromUtf8("QWidget{ color: blue; }"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(centralWidget);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        INSIDEPath_pushButton = new QPushButton(centralWidget);
        INSIDEPath_pushButton->setObjectName("INSIDEPath_pushButton");
        INSIDEPath_pushButton->setMinimumSize(QSize(60, 20));
        INSIDEPath_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(INSIDEPath_pushButton, 5, 2, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 9, 0, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        Log_lineEdit = new QLineEdit(centralWidget);
        Log_lineEdit->setObjectName("Log_lineEdit");
        Log_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}"));

        gridLayout->addWidget(Log_lineEdit, 9, 1, 1, 1);

        RFIDPath_pushButton = new QPushButton(centralWidget);
        RFIDPath_pushButton->setObjectName("RFIDPath_pushButton");
        RFIDPath_pushButton->setMinimumSize(QSize(60, 20));
        RFIDPath_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(RFIDPath_pushButton, 7, 2, 1, 1);

        NGPath_pushButton = new QPushButton(centralWidget);
        NGPath_pushButton->setObjectName("NGPath_pushButton");
        NGPath_pushButton->setMinimumSize(QSize(60, 20));
        NGPath_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(NGPath_pushButton, 3, 2, 1, 1);

        RFID_lineEdit = new QLineEdit(centralWidget);
        RFID_lineEdit->setObjectName("RFID_lineEdit");
        RFID_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}"));

        gridLayout->addWidget(RFID_lineEdit, 7, 1, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 11, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 10, 1, 1, 1);

        OKPath_pushButton = new QPushButton(centralWidget);
        OKPath_pushButton->setObjectName("OKPath_pushButton");
        OKPath_pushButton->setMinimumSize(QSize(60, 20));
        OKPath_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(OKPath_pushButton, 1, 2, 1, 1);

        OK_lineEdit = new QLineEdit(centralWidget);
        OK_lineEdit->setObjectName("OK_lineEdit");
        OK_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}"));

        gridLayout->addWidget(OK_lineEdit, 1, 1, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 4, 1, 1, 1);

        SaveTime_lineEdit = new QLineEdit(centralWidget);
        SaveTime_lineEdit->setObjectName("SaveTime_lineEdit");
        SaveTime_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}"));

        gridLayout->addWidget(SaveTime_lineEdit, 11, 1, 1, 1);

        LogPath_pushButton = new QPushButton(centralWidget);
        LogPath_pushButton->setObjectName("LogPath_pushButton");
        LogPath_pushButton->setMinimumSize(QSize(60, 20));
        LogPath_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(LogPath_pushButton, 9, 2, 1, 1);

        NG_lineEdit = new QLineEdit(centralWidget);
        NG_lineEdit->setObjectName("NG_lineEdit");
        NG_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}"));

        gridLayout->addWidget(NG_lineEdit, 3, 1, 1, 1);

        INSIDE_lineEdit = new QLineEdit(centralWidget);
        INSIDE_lineEdit->setObjectName("INSIDE_lineEdit");
        INSIDE_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid gray; /* \350\276\271\346\241\206 */\n"
"	border-radius: 4px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding: 0 8px;         /* \345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"	background: white;      /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-background-color: darkgray; /*\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"}"));

        gridLayout->addWidget(INSIDE_lineEdit, 5, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 8, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 6, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 0, 1, 1);

        FileClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FileClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 296, 17));
        FileClass->setMenuBar(menuBar);

        retranslateUi(FileClass);
        QObject::connect(OKPath_pushButton, SIGNAL(clicked()), FileClass, SLOT(OKPath_pushButton_clicked()));
        QObject::connect(LogPath_pushButton, SIGNAL(clicked()), FileClass, SLOT(LogPath_pushButton_clicked()));
        QObject::connect(NGPath_pushButton, SIGNAL(clicked()), FileClass, SLOT(NGPath_pushButton_clicked()));
        QObject::connect(SaveTime_lineEdit, SIGNAL(editingFinished()), FileClass, SLOT(SaveTime_lineEdit_Change()));
        QObject::connect(INSIDEPath_pushButton, SIGNAL(clicked()), FileClass, SLOT(INSIDEPath_pushButton_clicked()));
        QObject::connect(RFIDPath_pushButton, SIGNAL(clicked()), FileClass, SLOT(RFIDPath_pushButton_clicked()));

        QMetaObject::connectSlotsByName(FileClass);
    } // setupUi

    void retranslateUi(QMainWindow *FileClass)
    {
        FileClass->setWindowTitle(QCoreApplication::translate("FileClass", "File", nullptr));
        label->setText(QCoreApplication::translate("FileClass", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">\345\255\230\345\202\250\350\256\276\347\275\256</span></p></body></html>", nullptr));
        INSIDEPath_pushButton->setText(QCoreApplication::translate("FileClass", "\346\265\217\350\247\210", nullptr));
        label_3->setText(QCoreApplication::translate("FileClass", "\346\227\245\345\277\227\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("FileClass", "NG\345\233\276\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("FileClass", "INSIDE\345\233\276\357\274\232", nullptr));
        RFIDPath_pushButton->setText(QCoreApplication::translate("FileClass", "\346\265\217\350\247\210", nullptr));
        NGPath_pushButton->setText(QCoreApplication::translate("FileClass", "\346\265\217\350\247\210", nullptr));
        label_5->setText(QCoreApplication::translate("FileClass", "\345\255\230\345\202\250\345\244\251\346\225\260\357\274\232", nullptr));
        OKPath_pushButton->setText(QCoreApplication::translate("FileClass", "\346\265\217\350\247\210", nullptr));
        label_7->setText(QCoreApplication::translate("FileClass", "RFID\345\233\276\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("FileClass", "OK\345\233\276\357\274\232", nullptr));
        LogPath_pushButton->setText(QCoreApplication::translate("FileClass", "\346\265\217\350\247\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileClass: public Ui_FileClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_H
