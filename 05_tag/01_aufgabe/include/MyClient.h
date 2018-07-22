#pragma once
#include <QObject>
#include <QtNetwork>
#include <QTcpSocket> 
#include <QDebug>
class MyClient : public QObject {
	Q_OBJECT
public:
	MyClient(QObject * parent = 0 );
	void startChat(const QString & username);
	void sendMessage(const QString & message);
	void closeChat();

public Q_SLOTS:
	void onReadyRead();
	void onConnected();
	void onError(QAbstractSocket::SocketError o);
	void onBytesWritten(qint64);
private:
	QTcpSocket * m_tcpSocket;
	quint16 m_blocksize;
	QString m_username;

	QDateTime m_tmpStamp;
	QString m_clientId;
	QString m_success;
	QString m_received_message;
	qint64 m_noBytes;
	int m_conntected = 1;
	void testing();
	void ownWrite(const QString message);

	void extractXML(const QString & xmlInput, QDateTime & timestamp, QString & clientId, QString & success, QString & message);

	void generateXML(QString * output, const QString & method, const QVector<QString> & params);
};

