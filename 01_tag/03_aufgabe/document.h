#pragma once
#include <QtCore>
#include <iostream>

class Document : public QObject{
	Q_OBJECT
public:
	QString m_text;
	Document(const QString &text);
	void setText(QString text); // triger textchanged
Q_SIGNALS:
	void textChanged(QString);
};