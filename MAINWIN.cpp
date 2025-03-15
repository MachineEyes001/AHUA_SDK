#include "MAINWIN.h"

MAINWIN::MAINWIN(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.stackedWidget->addWidget(&Bandhnu_ui);
	ui.stackedWidget->addWidget(&File_ui);
}

MAINWIN::~MAINWIN()
{
}

void MAINWIN::BarWIN_clicked()
{
	ui.stackedWidget->setCurrentIndex(0);
}
void MAINWIN::FileWIN_clicked()
{
	ui.stackedWidget->setCurrentIndex(1);
}
