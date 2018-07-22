#pragma once
#include <QFile>
#include <QString>
#include <QMessageBox>
class CSVManager
{
  public:
	bool readCSV(const QString &fileName, QString &data);
	bool storeCSV(const QString &fileName, QList<QStringList> &dataList);
	bool parseCSV(const QString &data, QList<QStringList> &dataList);
};
