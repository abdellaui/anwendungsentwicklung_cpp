#include <QWidget>
#include <QApplication>
#include "TestMainWindow.h"
#include <iostream>
int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	TestMainWindow mainWindow;

	mainWindow.show();
	return app.exec();
}