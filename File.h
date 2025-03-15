#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_File.h"
#include <QFileDialog>
#include <QSettings>

class File : public QMainWindow
{
	Q_OBJECT

public:
	File(QWidget *parent = nullptr);
	~File();
	void CheckAndCleanFolders(QString path);
	void triggerCheckAndCleanFolders();
	void CheckAndCleanFiles(QString path);
	int SaveTime = 0;
private:
	Ui::FileClass ui;

private slots:
	void OKPath_pushButton_clicked();
	void LogPath_pushButton_clicked();
	void NGPath_pushButton_clicked();
	int SaveTime_lineEdit_Change();
};
