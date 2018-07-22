#pragma once
#include "ui_MainWindow.h"
#include <QObject>
#include <QFileDialog>
#include <QMessageBox>

class MainWindow : public QMainWindow
{
	Q_OBJECT
public Q_SLOTS:
	void onSelectOpen();
public:
	MainWindow(QMainWindow *parent = 0);

private:
	Ui::MainWindow m_gui;

Q_SIGNALS:
	void file_selected(QString);
};
