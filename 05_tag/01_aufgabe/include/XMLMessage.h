#pragma once
#include <QWidget>
#include <QXmlStreamReader>
#include <QTcpSocket> 
#include <QTcpServer> 
#include <QDebug>
class MyClient : public QObject {
	Q_OBJECT
public:
	MyClient(QObject * parent = 0 );

private:
	QString m_uid;
	QTcpSocket * m_tcpSocket;
	quint16 m_blocksize;
	QXmlStreamReader * m_reader;
	QXmlStreamWriter * m_writer;

	/void extractXML(const & QString, QVec);
public Q_SLOTS:
	void sendMessage();
	void onReadyRead();
};