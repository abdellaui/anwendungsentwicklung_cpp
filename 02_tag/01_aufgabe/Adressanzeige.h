#pragma once
#include <QWidget>
#include <QLabel>
#include <iostream>
#include <QGridLayout>
#include <QImage>
#include <QPixmap>
class Adressanzeige : public QWidget
{
	Q_OBJECT
public:
	Adressanzeige(QWidget * parent = 0);
	~Adressanzeige();
private:
	QString m_name;
	QString m_vorname;
	QString m_anrede;
	QString m_strasse;
	QString m_hausnummer;
	QString m_PLZ;
	QString m_stadt;
	QString m_land;
	QLabel * m_output;


	void formatGerman();
	void formatGB();
	void setData(QString & name, QString & vorname, QString & anrede, QString & strasse, QString & hausnummer, QString & PLZ, QString & stadt,  QString & land);

public Q_SLOTS:
void onGenerateOutput(QString name, QString vorname, QString anrede, QString strasse, QString hausnummer, QString PLZ, QString stadt, QString land);
};

