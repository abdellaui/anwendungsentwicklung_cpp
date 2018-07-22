#pragma once
#include "ui_SourceWidget.h"
#include <QMessageBox>
#include <QTimer>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

class SourceWidget : public QWidget
{
	Q_OBJECT
public:
	SourceWidget(QWidget *parent = 0);
	~SourceWidget();
	Ui::SourceWidget & getGui();

private:
	Ui::SourceWidget m_gui;
	cv::VideoCapture m_cap;
	QTimer * m_timer;
Q_SIGNALS:
	void new_Image(cv::Mat);

public Q_SLOTS:
	void on_file_selected(QString filename);
	void on_timer_triggered();
};