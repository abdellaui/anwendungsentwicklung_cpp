#pragma once
#include <QWidget>
#include <QFormLayout>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QtCore>
#include <iostream>
#include <QMessageBox>
#include "ownValidator.h"

class Adresseingabe : public QWidget
{
	Q_OBJECT
public:
	Adresseingabe(QWidget * parent = 0);
	~Adresseingabe();


public Q_SLOTS:
	void btn_eingabe_clicked();

private:
	QFormLayout *m_layout;
	QLineEdit *m_name;
	QLineEdit *m_vorname;
	QComboBox *m_anrede;
	QLineEdit *m_strasse;
	QLineEdit *m_hausnummer;
	QLineEdit *m_PLZ;
	QLineEdit *m_stadt;
	QComboBox *m_land;
	QPushButton *m_btn_eingabe;
	const bool validateInput() const;


Q_SIGNALS:
	void generateOutput(QString name, QString vorname, QString anrede, QString strasse, QString hausnummer, QString PLZ, QString stadt, QString land);
};

