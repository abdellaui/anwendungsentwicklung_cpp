#include "MyClient.h"

MyClient::MyClient(QObject * parent) : QObject(parent)
{
	m_blocksize = 0;
	m_tcpSocket = new QTcpSocket(parent);
	m_tcpSocket->connectToHost("134.147.194.159", 9911);
	m_reader = new QXmlStreamReader();
	m_writer = new QXmlStreamWriter();
	QObject::connect(m_tcpSocket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
}
void MyClient::sendMessage() {
	/*
	

	QString message = "Dies ist ein Test";
	QByteArray messageToSend; 
	QDataStream out(&messageToSend, QIODevice::WriteOnly);
	out << (quint16)0; out << message; out.device()->seek(0);
	out << (quint16)(messageToSend.size() - sizeof(quint16));
	QTcpSocket * clientConnection = m_tcpServer->nextPendingConnection(); 

	connect(clientConnection, SIGNAL(disconnected()), clientConnection, SLOT(deleteLater())); 

	clientConnection->write(messageToSend); 
	clientConnection->disconnectFromHost(); 

	*/
}

void MyClient::onReadyRead() {
	QDataStream in(m_tcpSocket);
	if (m_blocksize == 0) // Groesse der Nachricht wurde noch nicht gelesen 
	{ 
		if (m_tcpSocket->bytesAvailable() < (int)sizeof(quint16)) //Groesse der Daten auf Socket? 
		return;
		in >> m_blocksize; // Groesse der Daten speichern 
	} 
	if (m_tcpSocket->bytesAvailable() < m_blocksize) // Warten bis alle Daten da 
		return; 
	QString message; 
	in >> message; // Daten aus Socket lesen
	qDebug()<< message;
}

