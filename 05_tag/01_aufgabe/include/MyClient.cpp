#include "MyClient.h"

MyClient::MyClient(QObject * parent) : QObject(parent)
{
	m_tcpSocket = new QTcpSocket(parent);
	QObject::connect(m_tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(onError(QAbstractSocket::SocketError)));
	QObject::connect(m_tcpSocket, SIGNAL(connected()), this, SLOT(onConnected()));
	QObject::connect(m_tcpSocket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));

	QObject::connect(m_tcpSocket, SIGNAL(bytesWritten(qint64)), this, SLOT(onBytesWritten(qint64)));
	m_blocksize = 0;
	//m_tcpSocket->abort();
	m_tcpSocket->connectToHost("134.147.194.82", 9911);
	m_conntected = 1;
}

void MyClient::onError(QAbstractSocket::SocketError o) {
	qDebug() <<"error" << o;
}
void MyClient::onConnected() {
	qDebug() << "connected";
} 

void MyClient::testing(){
	if (m_conntected == 1) {
	
		startChat("Tolga");
		m_tcpSocket->abort();
		m_tcpSocket->connectToHost("134.147.194.82", 9911);

	}
	if (m_conntected == 2) {

		sendMessage("Test");
	
		m_tcpSocket->abort();
		m_tcpSocket->connectToHost("134.147.194.82", 9911);

	}
	if (m_conntected == 3) {

		closeChat();

	}
	m_conntected++;
}


void MyClient::onBytesWritten(qint64 bytess) {
	if (m_noBytes > bytess) {
		return;
	}
	//m_tcpSocket->deleteLater();
}
void MyClient::onReadyRead() {
	qDebug() << "ready";
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
	in >> message;

	extractXML(message, m_tmpStamp, m_clientId, m_success, m_received_message);

	qDebug() << m_clientId;
	if (m_success == "0") {
		qDebug() << "Fehler: "<< m_received_message;
	}
	testing();

}

void MyClient::extractXML(const QString & xmlInput,
						   QDateTime & timestamp,
						   QString & clientId,
						   QString & success,
						   QString & message) {
	QXmlStreamReader reader(xmlInput); 
	reader.readNextStartElement();
	if (reader.name() == "ChatServerMessageAnswer") {
		QXmlStreamAttributes & attributes = reader.attributes(); // Attribute 
		clientId = attributes.value("clientId").toString(); 

		QString timeString = attributes.value("timestamp").toString(); 
		timestamp = QDateTime::fromString(attributes.value("timestamp").toString(), Qt::ISODate);

		success = attributes.value("success").toString();

		reader.readNextStartElement();
		if(reader.name() == "message")
		{ 
			message = reader.readElementText();
		}
	}

	if (reader.name() == "ChatServerConnected") {
	
		QXmlStreamAttributes & attributes = reader.attributes(); // Attribute 
		clientId = attributes.value("clientId").toString();

		QString timeString = attributes.value("timestamp").toString();
		timestamp = QDateTime::fromString(attributes.value("timestamp").toString(), Qt::ISODate);
	}
}



void MyClient::generateXML(QString * output, const QString & method, const QVector<QString> & params) {
	QXmlStreamWriter writer(output);
	writer.setAutoFormatting(true);
	writer.writeStartDocument();
	writer.writeStartElement("ChatServerRequest");
	writer.writeAttribute("timestamp", QDateTime::currentDateTime().toString(Qt::ISODate));
	writer.writeAttribute("clientId", m_clientId);
	writer.writeAttribute("service", method);

	writer.writeStartElement("Parameters");
	for (int i = 0; i < params.size(); i++) {
		writer.writeTextElement("Param", params.at(i));
	}

	writer.writeEndElement();
	writer.writeEndElement();
	writer.writeEndDocument();
	m_noBytes = output->size();
}

void MyClient::startChat(const QString & username) {
		if (m_username.isEmpty()) {
			m_username = username;
		}
		else
		{
			qDebug() << "nur einmal aufrufen!";
			return;
		}
		QString toSend;
		QVector<QString> param{ username };
		generateXML(&toSend, "startChat", param);

		this->ownWrite(toSend);

		m_tcpSocket->abort();
		m_tcpSocket->connectToHost("134.147.194.82", 9911);
		qDebug()<<"start";

}
void MyClient::sendMessage(const QString & message) {
	if (m_username.isEmpty()) 
	{
		qDebug() << "startChat aufrufen!";
		return;
	}
	QString toSend;
	QVector<QString> param{ m_username , message };
	generateXML(&toSend, "sendMessage", param);
	this->ownWrite(toSend);

	qDebug() << "sent";
}
void MyClient::closeChat() {
	QString toSend;
	QVector<QString> param;
	generateXML(&toSend, "closeChat", param);

	this->ownWrite(toSend);

	m_tcpSocket->disconnect();
	//m_username = "";
	qDebug() << "close";
}

void MyClient::ownWrite(const QString message) {
	QByteArray messageToSend; // Datenarray, in das Nachricht geschrieben wird 
	QDataStream out( &messageToSend, QIODevice::WriteOnly );
	out << (quint16)0; // Platzhalter, um spaeter die Groesse der Nachricht festzulegen 
	out << message; 
	out.device()->seek( 0 ); // zu Platzhalter gehen ... 
	out << (quint16)( messageToSend.size() - sizeof( quint16 ) ); // ... und Groesse der Nachricht einfuegen
	m_tcpSocket->write(messageToSend); // Nachricht auf Socket schreiben 
	m_tcpSocket->waitForBytesWritten(); // Warten, bis Nachricht geschrieben wurde 

	qDebug() << message;

}

