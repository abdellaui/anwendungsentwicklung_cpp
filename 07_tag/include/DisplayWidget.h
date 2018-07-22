#pragma once
#include "ui_DisplayWidget.h"
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <QFileDialog>
#include <QMessageBox>
class DisplayWidget : public QWidget
{
	Q_OBJECT
public Q_SLOTS:
		void on_new_Image(cv::Mat);
		void on_toggled_record(bool record);
		void on_toggled_preserve(bool preserve);
		void on_input_clicked(bool togl);
public:
	DisplayWidget(QWidget *parent = 0);
	~DisplayWidget();
	Ui::DisplayWidget & getGui();

private:
	cv::Mat m_currentInput;
	Ui::DisplayWidget m_gui;
	cv::VideoWriter * m_speicher;
};