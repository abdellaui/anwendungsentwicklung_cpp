#include "MyMainWindow.h"


MyMainWindow::MyMainWindow(QWidget * parent) : QMainWindow(parent)
{
	m_gui.setupUi(this);
	QObject::connect(m_gui.actionSort, &QAction::triggered, this, &MyMainWindow::onSort);


}

void MyMainWindow::onSort()
{
	MyWidget * w = new MyWidget(this);
	QObject::connect(w, &MyWidget::cancel, [w]() {w->close(); });
	
	w->setWindowTitle("Sorting");
	w->show();

}
