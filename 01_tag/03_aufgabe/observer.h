#pragma once
#include <QtCore>
#include <iostream>

class Observer : public QObject {
	Q_OBJECT
public:
	Observer();
	static int m_ID_Counter;
	const int m_ID;


	public Q_SLOTS:
	void onTextChanged(QString text);
};