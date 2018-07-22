#include "TestMainWindow.h"
#include <iostream>
#include <qDebug>
TestMainWindow::TestMainWindow(QWidget *parent) : QMainWindow(parent)
{
	m_gui.setupUi(this);
	adressModelInstance = nullptr;

    m_gui.menuAdresse->setDisabled(true);
    
    m_gui.actionOeffnen->setShortcut(Qt::Key_O | Qt::CTRL);
    m_gui.actionSpeichern->setShortcut(Qt::Key_S | Qt::CTRL);
    m_gui.actionHinzufuegen->setShortcut(Qt::Key_C | Qt::CTRL);
    m_gui.actionLoeschen->setShortcut(Qt::Key_D | Qt::CTRL);
    m_gui.actionBeenden->setShortcut(Qt::Key_X | Qt::CTRL);

	QObject::connect(m_gui.actionOeffnen, &QAction::triggered, this, &TestMainWindow::onSelectOpen);
	QObject::connect(m_gui.actionSpeichern, &QAction::triggered, this, &TestMainWindow::onSelectStore);
	QObject::connect(m_gui.actionHinzufuegen, &QAction::triggered, this, &TestMainWindow::onSelectCreate);
	QObject::connect(m_gui.actionLoeschen, &QAction::triggered, this, &TestMainWindow::onSelectDelete);
}

void TestMainWindow::onSelectOpen()
{
	QString filename = QFileDialog::getOpenFileName(
		this,
		"Open Database",
		QDir::currentPath(),
		"DB files (*.db)",
		nullptr,
		QFileDialog::Option::DontUseNativeDialog);

	if (filename.isNull()) {
		QMessageBox::critical(this, "Error", "Datei konnte nicht gefunden werden!");
		return;
	}

    m_gui.menuAdresse->setDisabled(false);
    adressModelInstance = new AdressModel(filename, this);

	m_gui.tableView->setModel(adressModelInstance);
	m_gui.tableView->setSortingEnabled(true);
	//m_gui.tableView->sortByColumn(4, Qt::DescendingOrder);
	pWidgetMapper = new QDataWidgetMapper();
	pWidgetMapper->setModel(adressModelInstance);

	pWidgetMapper->addMapping(m_gui.widgetAdresseingabe->m_name, 0);
	pWidgetMapper->addMapping(m_gui.widgetAdresseingabe->m_vorname, 1);
	pWidgetMapper->addMapping(m_gui.widgetAdresseingabe->m_anrede, 2);
	pWidgetMapper->addMapping(m_gui.widgetAdresseingabe->m_strasse, 3);
	pWidgetMapper->addMapping(m_gui.widgetAdresseingabe->m_hausnummer, 4);
	pWidgetMapper->addMapping(m_gui.widgetAdresseingabe->m_PLZ, 5);
	pWidgetMapper->addMapping(m_gui.widgetAdresseingabe->m_stadt, 6);
	pWidgetMapper->addMapping(m_gui.widgetAdresseingabe->m_land, 7);

	QObject::connect(m_gui.tableView->selectionModel(), SIGNAL(currentRowChanged(QModelIndex, QModelIndex)), pWidgetMapper, SLOT(setCurrentModelIndex(QModelIndex)));
    
	//QObject::connect(m_gui.tableView->horizontalHeader(), &QHeaderView::sortIndicatorChanged, this, &TestMainWindow::onSort);
}

void TestMainWindow::onSelectStore()
{

	if (adressModelInstance == nullptr) {
		QMessageBox::information(this, "Achtung", "Keine Daten vorhanden!");
		return;
	}

	QString filename = QFileDialog::getSaveFileName(
		this,
		"Save Database",
		QDir::currentPath(),
		"Text files (*.txt)",
		nullptr,
		QFileDialog::Option::DontUseNativeDialog);

	if (filename.isNull()) {
		QMessageBox::critical(this, "Error", "Datei konnte nicht gespeichert werden!");
		return;
	}

	adressModelInstance->store(filename);
}

void TestMainWindow::onSelectCreate()
{
	if (adressModelInstance == nullptr) {
		QMessageBox::information(this, "Achtung", "Keine Daten vorhanden!");
		return;
	}

	adressModelInstance->insertRows(adressModelInstance->rowCount(), 1);
}

void TestMainWindow::onSelectDelete()
{
	if (adressModelInstance == nullptr) {
		QMessageBox::information(this, "Achtung", "Keine Daten vorhanden!");
		return;
	}
	

	QModelIndexList selection = m_gui.tableView->selectionModel()->selectedRows();
	if (selection.count() < 1) {
		QMessageBox::information(this, "Achtung", "Keine Zeile angewählt!");
		return;
	}
    
	for (int i = 0; i < selection.count(); i++)
		adressModelInstance->removeRows(selection.at(i).row() + 1, 1);
}

void TestMainWindow::onSort(int column, Qt::SortOrder order){
    qDebug()<<column<<"-"<<order;
	//m_gui.tableView->sortByColumn(column, order);
 
}
