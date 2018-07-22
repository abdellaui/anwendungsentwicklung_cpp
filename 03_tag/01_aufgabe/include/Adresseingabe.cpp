#include "Adresseingabe.h"

Adresseingabe::Adresseingabe(QWidget *parent) : QWidget(parent)
{
	m_layout = new QFormLayout(this);
	m_name = new QLineEdit(this); // ab morgen last parameter this
	m_vorname = new QLineEdit(this);
	m_anrede = new QComboBox(this);
	m_strasse = new QLineEdit(this);
	m_hausnummer = new QLineEdit(this);
	m_PLZ = new QLineEdit(this);
	m_stadt = new QLineEdit(this);
	m_land = new QComboBox(this);
	m_btn_eingabe = new QPushButton("Adresse erstellen", this);

	m_anrede->addItem(tr("maennlich"));
	m_anrede->addItem(tr("weiblich"));

	m_land->addItem(tr("Deutschland"));
	m_land->addItem(tr("Grossbritannien"));

	QValidator *valid = new QIntValidator(0, 99999, this);
	m_hausnummer->setValidator(valid);

	m_layout->addRow(new QLabel(tr("Name:"), this), m_name);
	m_layout->addRow(new QLabel(tr("Vorname:"), this), m_vorname);
	m_layout->addRow(new QLabel(tr("Anrede:"), this), m_anrede);
	m_layout->addRow(new QLabel(tr("Strasse:"), this), m_strasse);

	m_layout->addRow(new QLabel(tr("Hausnummer:"), this), m_hausnummer);
	m_layout->addRow(new QLabel(tr("PLZ:"), this), m_PLZ);
	m_layout->addRow(new QLabel(tr("Stadt:"), this), m_stadt);
	m_layout->addRow(new QLabel(tr("Land:"), this), m_land);

	m_layout->addRow(m_btn_eingabe);

	connect(m_btn_eingabe, &QPushButton::clicked, this, &Adresseingabe::btn_eingabe_clicked);

	connect(m_name, &QLineEdit::editingFinished, this, &Adresseingabe::validateInput);
	connect(m_vorname, &QLineEdit::editingFinished, this, &Adresseingabe::validateInput);
	connect(m_strasse, &QLineEdit::editingFinished, this, &Adresseingabe::validateInput);
	connect(m_hausnummer, &QLineEdit::editingFinished, this, &Adresseingabe::validateInput);
	connect(m_PLZ, &QLineEdit::editingFinished, this, &Adresseingabe::validateInput);
	connect(m_stadt, &QLineEdit::editingFinished, this, &Adresseingabe::validateInput);

	this->setLayout(m_layout);
	this->show();
}

const bool Adresseingabe::validateInput() const
{
	//Valid Textbox
	ownValidator validator;
	QString fehler = "";

	if (!validator.validOnlyChar(m_name->text()))
	{
		fehler += "Name Falsch\n";
	}

	if (!validator.validOnlyChar(m_vorname->text()))
	{
		fehler += "Vorame Falsch\n";
	}

	if (!validator.validOnlyChar(m_strasse->text()))
	{
		fehler += "Strasse Falsch\n";
	}
	if (m_land->currentText().toStdString() == "Deutschland")
	{

		if (!validator.validOnlyInt(m_PLZ->text()) || m_PLZ->text().size() != 5)
		{
			fehler += "PLZ (DE) Falsch\n";
		}
	}
	else
	{
		if (!validator.validspecialGBPLZ(m_PLZ->text()))
		{
			fehler += "PLZ (GB) Falsch\n";
		}
	}

	if (!validator.validOnlyChar(m_stadt->text()))
	{
		fehler += "Stadt Falsch\n";
	}

	if (!fehler.isEmpty())
	{

		QMessageBox::information(0, "Achtung", fehler);

		return false;
	}

	return true;
}

void Adresseingabe::btn_eingabe_clicked()
{

	if (validateInput())
	{
		Q_EMIT(
			generateOutput(
				m_name->text(),
				m_vorname->text(),
				m_anrede->currentText(),
				m_strasse->text(),
				m_hausnummer->text(),
				m_PLZ->text(),
				m_stadt->text(),
				m_land->currentText()));
	}
}

Adresseingabe::~Adresseingabe()
{
}
