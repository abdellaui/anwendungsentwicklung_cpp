#include "DisplayWidget.h"
#include <qDebug>
DisplayWidget::DisplayWidget(QWidget *parent) : QWidget(parent) {
	m_gui.setupUi(this);
	m_speicher = nullptr;

	m_gui.spinBox_fps->setMinimum(1);
	m_gui.spinBox_fps->setValue(30);
	m_gui.spinBox_fps->setMaximum(100);

	QObject::connect(m_gui.checkBox_record, &QAbstractButton::toggled, this, &DisplayWidget::on_toggled_record);
	QObject::connect(m_gui.checkBox_preserve, &QAbstractButton::toggled, this, &DisplayWidget::on_toggled_preserve);
	QObject::connect(m_gui.pushButton_filename, &QAbstractButton::clicked, this, &DisplayWidget::on_input_clicked);

}
DisplayWidget::~DisplayWidget() {
	m_speicher->release();
	delete m_speicher;
}
Ui::DisplayWidget & DisplayWidget::getGui(){
	return m_gui;
}

void DisplayWidget::on_input_clicked(bool togl) {
	qDebug()<<"ok";
	QString filename = QFileDialog::getSaveFileName(
		this,
		"Save Movie",
		QDir::currentPath(),
		"All files (*.avi)",
		nullptr,
		QFileDialog::Option::DontUseNativeDialog);

	if (filename.isNull()) {
		QMessageBox::critical(this, "Error", "Datei konnte nicht gespeichert werden!");
		return;
	}
	else {
		m_gui.lineEdit_filename->setText(filename);
		m_gui.checkBox_record->setEnabled(true);
	}
}

void DisplayWidget::on_new_Image(cv::Mat input) {

	m_currentInput = input;



	QSize imgSizeQt(input.rows, input.cols);
	cv::Size imgSizeCv(input.rows, input.cols);

	QImage imgQt(imgSizeQt, QImage::Format::Format_Grayscale8);
	cv::Mat header_imgQt(imgSizeCv, CV_8U, imgQt.bits());

	input.copyTo(header_imgQt);
	//cv::cvtColor(input, header_imgQt, cv::COLOR_GRAY2RGB);
 	m_gui.graphicsView->pixmap();

	m_gui.graphicsView->setPixmap(QPixmap::fromImage(imgQt));
	m_gui.graphicsView->setAlignment(Qt::AlignCenter);

	if (m_speicher!=nullptr && m_gui.checkBox_record->isChecked()) {
		if (m_speicher->isOpened()) {
			m_speicher->write(m_currentInput);
		}
		else {
			QMessageBox::critical(this, "Error", "Datei konnte nicht gespeichert werden!");
			return;
		}

	}
}

void DisplayWidget::on_toggled_record(bool record)
{
	if (record)
	{
		m_gui.label_status_inhalt->setText("Recording..");
		if (m_speicher == nullptr) {

			m_speicher = new cv::VideoWriter(
				m_gui.lineEdit_filename->text().toStdString(),
				CV_FOURCC('D', 'I', 'V', 'X'),
				m_gui.spinBox_fps->value(),
				m_currentInput.size(),
				false
			);


		}
	
	}
	else
	{
		m_speicher->release();
		m_gui.label_status_inhalt->setText("Not recording..");

	}
}

void DisplayWidget::on_toggled_preserve(bool preserve)
{
	m_gui.graphicsView->setScaledContents(preserve);
}