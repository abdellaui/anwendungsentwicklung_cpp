#include "..\include\MyWidget.h"


MyWidget::MyWidget(QWidget * parent) : QDialog(parent)
{
	qDebug() << "Opened";
	
	m_dialog.setupUi(this);
	QObject::connect(m_dialog.startButton, &QPushButton::clicked, this, &MyWidget::onStart2);
	QObject::connect(m_dialog.closeButton, &QPushButton::clicked, this, &MyWidget::onClose); 
	QObject::connect(m_dialog.closeButton, &QPushButton::clicked, this, &MyWidget::onCancel);
	m_dialog.spinBox->setMaximum(1000000000);
	m_dialog.progressBar->setMaximum(100);
	m_dialog.progressBar->setMinimum(0);
	m_dialog.progressBar->reset();

	
}

void MyWidget::onClose()
{
	if(m_dialog.startButton->text() == "Close")
		Q_EMIT(cancel());
}

void MyWidget::onCancel()
{
	
	Q_EMIT(request());
}

void MyWidget::onUpdate(int)
{
}

void MyWidget::onStart2() {
	int input = m_dialog.spinBox->value();
	iS = new InsertSort(input);
	m_dialog.progressBar->setMaximum(input);
	m_dialog.progressBar->setMinimum(0);
	m_dialog.progressBar->reset();
	QObject::connect(iS, &InsertSort::sortStatus, m_dialog.progressBar, &QProgressBar::setValue);
	QObject::connect(iS, &InsertSort::finished, iS, &InsertSort::deleteLater);
	QObject::connect(this, &MyWidget::request, iS, &InsertSort::requested);
	iS->start();
	m_dialog.startButton->setEnabled(false);
	m_dialog.closeButton->setText("Abbrechen");
	

	
}