#pragma once
#include <QtCore>
#include <QWidget>
#include <QMainWindow>
#include "ui_MyMainWindow.h"
#include "InsertSort.h"
#include "MyWidget.h"

class MyMainWindow : public QMainWindow
{
	Q_OBJECT
private:
	Ui::MainWindow m_gui;

public:
	MyMainWindow(QWidget * parent = 0);


public Q_SLOTS:
	//void onStartedSorting();
	void onSort();

Q_SIGNALS:
	
};