#include "ImageBoard_Debugger.h"

ImageBoard_Debugger::ImageBoard_Debugger(QWidget *parent)
	: QMainWindow(parent)
{
	ui->setupUi(this);
	connect(ui->serialOpenButtom, SIGNAL(clicked()), this, SLOT(serialOpenButtom_clicked()));
}

void ImageBoard_Debugger::serialOpenButtom_clicked()
{
	if(ui->serialOpenButtom->text() == tr("�򿪴���"))
	{
		ui->serialOpenButtom->setText(tr("�رմ���"));
	}
	else if(ui->serialOpenButtom->text() == tr("�رմ���"))
	{
		ui->serialOpenButtom->setText(tr("�򿪴���"));
	}
}