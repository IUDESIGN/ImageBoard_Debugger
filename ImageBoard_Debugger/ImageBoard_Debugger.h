#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ImageBoard_Debugger.h"

class ImageBoard_Debugger : public QMainWindow
{
	Q_OBJECT

public:
	ImageBoard_Debugger(QWidget *parent = Q_NULLPTR);

private:
	Ui::ImageBoard_DebuggerClass ui;
};
