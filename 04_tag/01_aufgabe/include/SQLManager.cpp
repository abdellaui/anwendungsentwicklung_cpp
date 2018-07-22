#include "SQLManager.h"
#include <qDebug>


SQLManager::SQLManager(const QString & pfad)
{

	m_db = QSqlDatabase::addDatabase("QSQLITE");
	m_db.setHostName("localhost");
    m_db.setDatabaseName(pfad);
	m_connected = m_db.open();
}


SQLManager::~SQLManager()
{
	if(m_connected)
		m_db.close();
}


const QString SQLManager::createRow() {

	QString queryString = "INSERT INTO adressliste(`id`, `name`, `vorname`, `anrede`, `strasse`, `hausnummer`, `plz`, `stadt`, `land`) ";
	                       queryString += "VALUES (NULL, '(leer)','(leer)','(leer)','(leer)','(leer)','(leer)','(leer)','(leer)');";
	QSqlQuery query(queryString, m_db);
	qDebug() << query.executedQuery();
	return query.lastInsertId().toString();

}
bool SQLManager::deleteRow(const int & id) {
	QSqlQuery query(m_db);
	query.prepare("DELETE FROM adressliste WHERE id = :id;");
	query.bindValue(":id", id);

	qDebug() << query.executedQuery();
	return query.exec();
}
bool SQLManager::readDB(QList<QStringList> &dataList) {

	QSqlQuery query("SELECT * FROM adressliste;", m_db);
	while (query.next()) 
	{
		QSqlRecord record = query.record();
		QStringList tmp;
		for (int i = 0; i < record.count(); i++)
		{
			tmp << record.value(i).toString();
		}

		dataList.push_back(tmp);
	}
	return true;

}


bool SQLManager::updateDB(const int & id, const QString & column, const QString & value){

	QSqlQuery query(m_db);
	query.prepare(QString("UPDATE adressliste SET %1 = :value WHERE id = :id;").arg(column));
	query.bindValue(":value", value);
	query.bindValue(":id", id);

	qDebug() << query.executedQuery();
	return query.exec();
}