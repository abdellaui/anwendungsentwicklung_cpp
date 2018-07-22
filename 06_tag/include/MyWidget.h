#pragma once
#include "ui_MyWidget.h"
#include <QtCore>
#include "InsertSort.h"
#include <QSpinBox>
#include <QPushButton>

class MyWidget : public QDialog 
{
	Q_OBJECT

private:

	InsertSort * iS;



public:
	Ui::Dialog m_dialog;
	MyWidget(QWidget * parent = 0);

	public Q_SLOTS:
	void onStart2();
	void onClose();
	void onCancel();
	void onUpdate(int);
	
Q_SIGNALS:

	void cancel();
	void request();


	

};