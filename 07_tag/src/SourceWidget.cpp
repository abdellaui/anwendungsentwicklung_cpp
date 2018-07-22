#include "SourceWidget.h"
#include <qDebug>
SourceWidget::SourceWidget(QWidget *parent) : QWidget(parent) {
	m_gui.setupUi(this);
	m_gui.spinBox_fps->setMinimum(1);
	m_gui.spinBox_fps->setValue(30);
	m_gui.spinBox_fps->setMaximum(100);
	m_timer = new QTimer(this);

	QObject::connect(m_timer, SIGNAL(timeout()), this, SLOT(on_timer_triggered()));
}
SourceWidget::~SourceWidget() {}

Ui::SourceWidget & SourceWidget::getGui() {
	return m_gui;
}


void SourceWidget::on_timer_triggered() {
	cv::Mat tempMat;
	m_gui.progressBar->setValue(m_cap.get(CV_CAP_PROP_POS_FRAMES));

	if (m_cap.read(tempMat)) {
		Q_EMIT(new_Image(tempMat));
	}
	else {
		m_gui.pushButton_chooseMovie->setDisabled(false);
		m_gui.spinBox_fps->setDisabled(false);

		m_timer->stop();
	}
}
void SourceWidget::on_file_selected(QString filename)
{
	m_gui.pushButton_chooseMovie->setDisabled(true);
	m_gui.spinBox_fps->setDisabled(true);

	m_cap.open(filename.toStdString());
	if ( m_cap.isOpened() ) {
		m_gui.progressBar->setMaximum(m_cap.get(CV_CAP_PROP_FRAME_COUNT));
		m_timer->setInterval((1./m_gui.spinBox_fps->value()) * 1000 );
		m_timer->start();
	}
	else {
		QMessageBox::information(0, "Achtung!", "Datei beinhaltet Fehler!");
		return;
	}

}
