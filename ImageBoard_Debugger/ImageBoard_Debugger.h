#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ImageBoard_Debugger.h"
#include <qserialport.h>
#include <qserialportinfo.h>

#if _MSC_VER >= 1600  
#pragma execution_character_set("utf-8")  
#endif  

class ImageBoard_Debugger : public QMainWindow
{
	Q_OBJECT

public:
	ImageBoard_Debugger(QWidget *parent = Q_NULLPTR);

private slots:
	void serialOpenButtom_clicked();

private:
	Ui::ImageBoard_DebuggerClass *ui;
	QSerialPort *serial;

};
