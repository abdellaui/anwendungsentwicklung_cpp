#include "observer.h"
int Observer::m_ID_Counter = 0;

Observer::Observer() : m_ID(++m_ID_Counter){}


void Observer::onTextChanged(QString text) {
	std::cout <<"ID: "<< m_ID << std::endl;
	std::cout << "Text: " << text.toStdString() << std::endl;

}
