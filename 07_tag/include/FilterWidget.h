#pragma once
#include "ui_FilterWidget.h"
#include <QStandardItem>
#include <QMessageBox>

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>


class FilterWidget : public QWidget
{
	Q_OBJECT
public:
	FilterWidget(QWidget *parent = 0);
	Ui::FilterWidget & getGui();
	void generateItems(const unsigned int size);
	cv::Mat generateMatrixFromTable();
private:
	Ui::FilterWidget m_gui;
Q_SIGNALS:
	void new_Image(cv::Mat);
public Q_SLOTS:
	void on_new_Image(cv::Mat);
	void on_current_item_changed(int);
};