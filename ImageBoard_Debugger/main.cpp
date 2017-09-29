#include "ImageBoard_Debugger.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ImageBoard_Debugger w;
	w.show();
	return a.exec();
}
