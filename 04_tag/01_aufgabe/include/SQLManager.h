#pragma once

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql/QSqlRecord>
#include <QString>

class SQLManager
{
public:
	SQLManager(const QString & pfad);
	~SQLManager();
	const QString createRow();
	bool deleteRow(const int & id);
	bool updateDB(const int & id, const QString & column, const QString & value);

	bool readDB(QList<QStringList> &dataList);

private:
	QSqlDatabase m_db;
	bool m_connected;
};

