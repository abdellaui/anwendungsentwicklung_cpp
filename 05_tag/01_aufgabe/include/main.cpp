#include <QWidget>
#include <QApplication>
#include <iostream>
#include "MyClient.h"
int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	MyClient * client = new MyClient(&app);

	return app.exec();
}