#include <QWidget>
#include <QApplication>
#include "Adresseingabe.h"
#include "Adressanzeige.h"
int main(int argc, char ** argv) {
	QApplication app(argc, argv);
	Adresseingabe toplevelwidget;



	Adressanzeige anzeige;
	QObject::connect(&toplevelwidget, &Adresseingabe::generateOutput, &anzeige, &Adressanzeige::onGenerateOutput);

	toplevelwidget.show();
	return app.exec();
}