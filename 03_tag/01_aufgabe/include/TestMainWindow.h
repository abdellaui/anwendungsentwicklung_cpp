#pragma once
#include <QMainWindow>
#include <QFileDialog>
#include "ui_TestMainWindow.h"
#include "Adresseingabe.h"
#include "AdressModel.h"
#include <QDataWidgetMapper>
class TestMainWindow : public QMainWindow
{
	Q_OBJECT
  public:
	TestMainWindow(QWidget *parent = 0);

  public Q_SLOTS:
	void onSelectOpen();
	void onSelectStore();
	void onSelectCreate();
	void onSelectDelete();
    void onSort(int column, Qt::SortOrder order);

  private:
	Ui::TestMainWindow m_gui;
	AdressModel *adressModelInstance;
	QDataWidgetMapper *pWidgetMapper;
};
