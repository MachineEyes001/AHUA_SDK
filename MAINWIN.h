#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_MAINWIN.h"
#include <QButtonGroup>
#include "Bandhnu.h"
#include "File.h"

class MAINWIN : public QMainWindow
{
	Q_OBJECT

public:
	MAINWIN(QWidget *parent = nullptr);
	~MAINWIN();

private:
	Ui::MAINWINClass ui;
	QButtonGroup btnGroup;
	//定义
	Bandhnu Bandhnu_ui;
	File File_ui;
private slots:
	void BarWIN_clicked();
	void FileWIN_clicked();
};
#endif // MAINWINDOW_H
