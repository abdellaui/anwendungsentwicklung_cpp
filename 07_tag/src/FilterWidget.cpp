#include "FilterWidget.h"
#include <QDebug>


FilterWidget::FilterWidget(QWidget *parent) : QWidget(parent) {


	m_gui.setupUi(this);
	m_gui.tableView_filter->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	m_gui.tableView_filter->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	m_gui.comboBox_filterSize->addItem("3");
	m_gui.comboBox_filterSize->addItem("5");
	m_gui.comboBox_filterSize->addItem("7");
	this->generateItems(3);

	QObject::connect(m_gui.comboBox_filterSize, SIGNAL(currentIndexChanged(int)), this, SLOT(on_current_item_changed(int)));
}


Ui::FilterWidget & FilterWidget::getGui() {
	return m_gui;
}
void FilterWidget::on_current_item_changed(int input) {
	generateItems(m_gui.comboBox_filterSize->currentText().toInt());
}
void FilterWidget::generateItems(const unsigned int size)
{

	QStandardItemModel * model = new QStandardItemModel(size, size);
	for (int row = 0; row < size; ++row) {
		for (int column = 0; column < size; ++column) {
			QStandardItem *item = new QStandardItem("1.0");
			item->setTextAlignment(Qt::AlignCenter);
			model->setItem(row, column, item);
		}
	}
	m_gui.tableView_filter->setModel(model);
	m_gui.tableView_filter->resizeColumnsToContents();
}

cv::Mat FilterWidget::generateMatrixFromTable()
{
	QStandardItemModel * model = dynamic_cast< QStandardItemModel *>(m_gui.tableView_filter->model());

	cv::Mat matrx(model->rowCount(), model->columnCount(), CV_32F, 1.0f);

	for (int i = 0; i < model->rowCount(); i++)
	{
		for (int j = 0; j < model->columnCount(); j++)
		{
			QVariant value = model->index(i, j).data();
			bool ok = false;
			float value_float = value.toFloat(&ok);
			if (ok) 
			{
				matrx.at<float>(i, j) = value_float;
			}
			else 
			{
				QMessageBox::information(0,"Achtung!", QString("Bei Kordinaten x: %1 y: %2 wurde 1.0 geschrieben! Nur Zahlen erlaubt!").arg(i).arg(j) );
				m_gui.tableView_filter->model()->setData(m_gui.tableView_filter->model()->index(i, j), QVariant(1.0), Qt::EditRole);
				matrx.at<float>(i, j) = 1.0f;
			}
		}
	}
	return matrx;
}


void FilterWidget::on_new_Image(cv::Mat input)
{
	cv::Mat temp_filter  = generateMatrixFromTable();

	cv::Mat cvtOutput(cv::Size(input.rows, input.cols), CV_8U);

	cv::cvtColor(input, cvtOutput, cv::COLOR_BGR2GRAY);

	cv::Mat output;
	cv::filter2D(cvtOutput, output, CV_32F, temp_filter);
	cv::Mat norm_output;

	cv::normalize(output, norm_output, 0, 255, cv::NORM_MINMAX, CV_8U);

	Q_EMIT(new_Image(norm_output));

}
