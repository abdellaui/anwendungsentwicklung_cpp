#include "MainWindow.h"
#include <QStandardItemModel>
MainWindow::MainWindow(QMainWindow *parent) : QMainWindow(parent) {
	m_gui.setupUi(this);


	QObject::connect(m_gui.widget_sourceWidget->getGui().pushButton_chooseMovie, &QAbstractButton::clicked, this, &MainWindow::onSelectOpen);
	QObject::connect(this, &MainWindow::file_selected, m_gui.widget_sourceWidget, &SourceWidget::on_file_selected);

	QObject::connect(m_gui.widget_sourceWidget,&SourceWidget::new_Image, m_gui.widget_filterWidget, &FilterWidget::on_new_Image);
	QObject::connect(m_gui.widget_filterWidget, &FilterWidget::new_Image, m_gui.widget_displayWidget, &DisplayWidget::on_new_Image);

}




void MainWindow::onSelectOpen()
{
	QString filename = QFileDialog::getOpenFileName(
		this,
		"Open Movie",
        "/Users/abdullah/_UNIVERSITAET/3-FILES/semester_3/anwendungsentwicklung/cpp/07_tag/src",
		//QDir::currentPath(),
		"All files (*.*)",
		nullptr,
		QFileDialog::Option::DontUseNativeDialog);

	if (filename.isNull()) {
		QMessageBox::critical(this, "Error", "Datei konnte nicht gefunden werden!");
		return;
	}
	Q_EMIT(file_selected(filename));
}
