#include "File.h"
QString srcDirPathOK;
QString srcDirPathLog;
QString srcDirPathNG;

void File::CheckAndCleanFolders(QString path)
{
	QDir dir(path);
	// 获取当前日期
	QDateTime currentDate = QDateTime::currentDateTime();
	// 获取文件夹列表
	QStringList folderList = dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);
	// 遍历文件夹列表
	for (const QString& folderName : folderList)
	{
		// 解析文件夹名称
		QStringList parts = folderName.split('-');
		if (parts.size() == 4)
		{
			int folderMonth = parts[0].toInt();
			int folderDay = parts[1].toInt();
			// 构造文件夹日期
			QDate folderDate(currentDate.date().year(), folderMonth, folderDay);
			// 计算日期差距
			int daysDiff = folderDate.daysTo(currentDate.date());
			// 如果日期差距超过指定天数，则删除文件夹及其内容
			if (daysDiff >= SaveTime)
			{
				QString folderPath = QString("%1/%2").arg(path).arg(folderName);
				QDir(folderPath).removeRecursively();
			}
		}
	}
}
void File::CheckAndCleanFiles(QString path)
{
	QDir dir(path);
	// 获取当前日期
	QDateTime currentDate = QDateTime::currentDateTime();
	// 获取文件列表
	QStringList fileList = dir.entryList(QStringList() << "*.txt", QDir::Files | QDir::NoDotAndDotDot);
	// 遍历文件列表
	for (const QString& fileName : fileList)
	{
		// 解析文件名
		QStringList parts = fileName.split('-');
		if (parts.size() == 3)
		{
			int fileYear = parts[0].toInt();
			int fileMonth = parts[1].toInt();
			int fileDay = parts[2].split('.').first().toInt();
			// 构造文件日期
			QDate fileDate(fileYear, fileMonth, fileDay);
			// 计算日期差距
			int daysDiff = fileDate.daysTo(currentDate.date());
			// 如果日期差距超过指定天数，则删除文件
			if (daysDiff >= SaveTime)
			{
				QString filePath = QString("%1/%2").arg(path).arg(fileName);
				QFile(filePath).remove();
			}
		}
	}
}
File::File(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setStyleSheet("background-color: rgb(255, 255, 0)");
	// 读取上一次保存的值
	QSettings settings("MySaveSetting", QSettings::IniFormat);
	QString OKpath = settings.value("OKpath").toString();
	if (!OKpath.isEmpty())
	{
		srcDirPathOK = OKpath;
		ui.OK_lineEdit->setText(OKpath);
	}
	QString NGpath = settings.value("NGpath").toString();
	if (!NGpath.isEmpty())
	{
		srcDirPathNG = NGpath;
		ui.NG_lineEdit->setText(NGpath);
	}
	QString Logpath = settings.value("Logpath").toString();
	if (!Logpath.isEmpty())
	{
		srcDirPathLog = Logpath;
		ui.Log_lineEdit->setText(Logpath);
	}
	QString TimeValue = settings.value("TimeValue").toString();
	if (!TimeValue.isEmpty())
	{
		ui.SaveTime_lineEdit->setText(TimeValue);
		triggerCheckAndCleanFolders();
	}
}
File::~File()
{
	// 保存当前输入的值
	QSettings settings("MySaveSetting", QSettings::IniFormat);
	QString currentOKpath = ui.OK_lineEdit->text();
	settings.setValue("OKpath", currentOKpath);
	QString currentNGpath = ui.NG_lineEdit->text();
	settings.setValue("NGpath", currentNGpath);
	QString currentLogpath = ui.Log_lineEdit->text();
	settings.setValue("Logpath", currentLogpath);
	QString currentTimeValue = ui.SaveTime_lineEdit->text();
	settings.setValue("TimeValue", currentTimeValue);
}
void File::OKPath_pushButton_clicked()
{
    //文件夹路径
	srcDirPathOK = QFileDialog::getExistingDirectory(
	this, "choose src Directory", "/");
	if (srcDirPathOK.isEmpty())
	{ return;  }
	ui.OK_lineEdit->setText(srcDirPathOK);
}
void File::LogPath_pushButton_clicked()
{
	//文件夹路径
	srcDirPathLog = QFileDialog::getExistingDirectory(
		this, "choose src Directory", "/");
	if (srcDirPathLog.isEmpty())
	{
		return;
	}
	else
	{
		srcDirPathLog += "/";
		ui.Log_lineEdit->setText(srcDirPathLog);
	}
}
void File::NGPath_pushButton_clicked()
{
	//文件夹路径
	srcDirPathNG = QFileDialog::getExistingDirectory(
		this, "choose src Directory", "/");
	if (srcDirPathNG.isEmpty())
	{
		return;
	}
	ui.NG_lineEdit->setText(srcDirPathNG);
}
int File::SaveTime_lineEdit_Change()
{
	bool ok;
	//获取lineedit数据
	QString SaveTime_s = ui.SaveTime_lineEdit->text();
	int SaveTime_i = SaveTime_s.toInt(&ok);
	if (SaveTime_i <= 0)
	{
		ui.SaveTime_lineEdit->setStyleSheet("QLineEdit { color: red; }");
	}
	else
		ui.SaveTime_lineEdit->setStyleSheet("QLineEdit{border:1px solid black }");
	return SaveTime_i;
}
void File::triggerCheckAndCleanFolders()
{
	SaveTime = SaveTime_lineEdit_Change();
	// 检查并清理保存路径内的文件夹
	CheckAndCleanFolders(srcDirPathOK);
	CheckAndCleanFolders(srcDirPathNG);
	CheckAndCleanFiles(srcDirPathLog);
}
