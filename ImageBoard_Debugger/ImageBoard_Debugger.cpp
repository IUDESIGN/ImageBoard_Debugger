#include "ImageBoard_Debugger.h"

ImageBoard_Debugger::ImageBoard_Debugger(QWidget *parent)
	: QMainWindow(parent)
{
	ui->setupUi(this);
	connect(ui->serialOpenButtom, SIGNAL(clicked()), this, SLOT(serialOpenButtom_clicked()));
}

void ImageBoard_Debugger::serialOpenButtom_clicked()
{
	if(ui->serialOpenButtom->text() == tr("打开串口"))
	{
		ui->serialOpenButtom->setText(tr("关闭串口"));
	}
	else if(ui->serialOpenButtom->text() == tr("关闭串口"))
	{
		ui->serialOpenButtom->setText(tr("打开串口"));
	}
}