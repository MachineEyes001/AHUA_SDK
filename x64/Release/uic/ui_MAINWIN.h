/********************************************************************************
** Form generated from reading UI file 'MAINWIN.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MAINWINClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QWidget *sideBar;
    QGridLayout *gridLayout;
    QToolButton *BarWIN;
    QToolButton *FileWIN;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MAINWINClass)
    {
        if (MAINWINClass->objectName().isEmpty())
            MAINWINClass->setObjectName("MAINWINClass");
        MAINWINClass->resize(1080, 580);
        MAINWINClass->setMinimumSize(QSize(1080, 580));
        centralWidget = new QWidget(MAINWINClass);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setMinimumSize(QSize(1080, 500));
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        sideBar = new QWidget(centralWidget);
        sideBar->setObjectName("sideBar");
        sideBar->setMinimumSize(QSize(55, 500));
        sideBar->setMaximumSize(QSize(16777215, 16777215));
        sideBar->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(228, 228, 228);  /* \350\256\276\347\275\256\350\203\214\346\231\257\350\211\262\344\270\272\347\201\260\350\211\262 */\n"
"}\n"
""));
        gridLayout = new QGridLayout(sideBar);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        BarWIN = new QToolButton(sideBar);
        BarWIN->setObjectName("BarWIN");
        BarWIN->setMinimumSize(QSize(46, 50));
        BarWIN->setStyleSheet(QString::fromUtf8("/* \351\273\230\350\256\244 */\n"
"QToolButton{   \n"
"	border-top: 3px outset transparent;           /* \344\270\212\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\351\200\217\346\230\216 */\n"
"	border-bottom: 7px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;\n"
"    min-width: 40px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 40px;\n"
"	background-color: rgb(228, 228, 228);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	border-left: 3px outset rgb(93, 95, 97);  /* \345\267\246\350\276\271\346\241\206\345\256\275\345\272\246"
                        "3\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\346\267\261\346\267\261\347\201\260 */\n"
"	background-color: rgb(246, 246, 246);	\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        BarWIN->setIcon(icon);
        BarWIN->setIconSize(QSize(30, 30));
        BarWIN->setCheckable(true);
        BarWIN->setAutoExclusive(true);
        BarWIN->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(BarWIN, 0, 0, 1, 1);

        FileWIN = new QToolButton(sideBar);
        FileWIN->setObjectName("FileWIN");
        FileWIN->setMinimumSize(QSize(46, 50));
        FileWIN->setStyleSheet(QString::fromUtf8("/* \351\273\230\350\256\244 */\n"
"QToolButton{   \n"
"	border-top: 3px outset transparent;           /* \344\270\212\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\351\200\217\346\230\216 */\n"
"	border-bottom: 7px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;\n"
"    min-width: 40px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 40px;\n"
"	background-color: rgb(228, 228, 228);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	border-left: 3px outset rgb(93, 95, 97);  /* \345\267\246\350\276\271\346\241\206\345\256\275\345\272\246"
                        "3\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\346\267\261\346\267\261\347\201\260 */\n"
"	background-color: rgb(246, 246, 246);	\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("file2.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        FileWIN->setIcon(icon1);
        FileWIN->setIconSize(QSize(30, 30));
        FileWIN->setCheckable(true);
        FileWIN->setAutoExclusive(true);
        FileWIN->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(FileWIN, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        gridLayout_2->addWidget(sideBar, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMinimumSize(QSize(1020, 530));
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(stackedWidget, 0, 1, 1, 1);

        MAINWINClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MAINWINClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1080, 17));
        MAINWINClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MAINWINClass);
        mainToolBar->setObjectName("mainToolBar");
        MAINWINClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MAINWINClass);
        statusBar->setObjectName("statusBar");
        MAINWINClass->setStatusBar(statusBar);

        retranslateUi(MAINWINClass);
        QObject::connect(BarWIN, SIGNAL(clicked()), MAINWINClass, SLOT(BarWIN_clicked()));
        QObject::connect(FileWIN, SIGNAL(clicked()), MAINWINClass, SLOT(FileWIN_clicked()));

        QMetaObject::connectSlotsByName(MAINWINClass);
    } // setupUi

    void retranslateUi(QMainWindow *MAINWINClass)
    {
        MAINWINClass->setWindowTitle(QCoreApplication::translate("MAINWINClass", "\346\211\216\346\237\223", nullptr));
        BarWIN->setText(QCoreApplication::translate("MAINWINClass", "\344\270\273\347\225\214\351\235\242", nullptr));
        FileWIN->setText(QCoreApplication::translate("MAINWINClass", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MAINWINClass: public Ui_MAINWINClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
