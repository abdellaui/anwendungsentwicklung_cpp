#include "Adressanzeige.h"



Adressanzeige::Adressanzeige(QWidget * parent) : QWidget(parent)
{
	m_output = new QLabel();
}


Adressanzeige::~Adressanzeige()
{
}

void Adressanzeige::setData(QString & name, QString & vorname, QString & anrede, QString & strasse, QString & hausnummer, QString & PLZ, QString & stadt, QString & land) {
	m_name = name;
	m_vorname = vorname;
	m_anrede = anrede;
	m_strasse = strasse;
	m_hausnummer = hausnummer;
	m_PLZ = PLZ;
	m_stadt = stadt;
	m_land = land;
}


void Adressanzeige::formatGerman()
{
	QString langAndrede = ((m_anrede == "maennlich") ? "Herr" : "Frau");
	QString out = langAndrede + " " + m_vorname + " " + m_name + "\n";
	out += m_strasse + " " + m_hausnummer + "\n";
	out += m_PLZ + " " + m_stadt + "\n";
	out += m_land;
	m_output = new QLabel(out, this);
}
void Adressanzeige::formatGB()
{

	QString langAndrede = ((m_anrede == "maennlich") ? "Mr." : "Mrs.");
	QString out = langAndrede + " " + m_vorname + " " + m_name + "\n";
	out += m_hausnummer + " " + m_strasse + "\n";
	out += m_stadt + "\n";
	out += m_PLZ + "\n";
	out += m_land;

	m_output = new QLabel(out, this);
}


void Adressanzeige::onGenerateOutput(QString name, QString vorname, QString anrede, QString strasse, QString hausnummer, QString PLZ, QString stadt, QString land) {
	setData(name, vorname, anrede, strasse, hausnummer, PLZ, stadt, land);
	m_output->clear();
	if (land.toStdString() == "Deutschland") {
		formatGerman();
	}
	else {
		formatGB();
	}



	this->setFixedSize(1000, 500);
	this->setStyleSheet("background-color:white");

	QGridLayout * grid = new QGridLayout(this);
	grid->setMargin(25);
	grid->setColumnStretch(1, 2);

	QLabel * briefmarke = new QLabel(this);
	QPixmap * image = new QPixmap("briefmarke.png");
	briefmarke->setPixmap(*image);


	grid->addWidget(briefmarke, 0, 3, Qt::AlignRight | Qt::AlignTop);

	m_output->setStyleSheet("font-size:16px");
	grid->addWidget(m_output, 1, 1, Qt::AlignRight);


	this->setLayout(grid);
	this->show();

	delete grid;
}
