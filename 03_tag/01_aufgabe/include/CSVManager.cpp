#include "CSVManager.h"
#include <iostream>
#include <QDebug>
bool CSVManager::readCSV(const QString &fileName, QString &data)
{
	QFile file(fileName);
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
		return false;

	data = QString::fromUtf8(file.readAll());
	return true;
}

bool CSVManager::storeCSV(const QString &fileName, QList<QStringList> &dataList)
{
	QString output = "";
	for (int i = 0; i < dataList.size(); i++)
	{
		for (int x = 0; x < dataList[i].count(); x++)
		{
			output += dataList[i][x];
			if (x < dataList[0].count() - 1)
				output += ";";
		}
		if (i < dataList.size() - 1)
			output += "\n";
	}

	QFile file(fileName);

	if (file.open(QIODevice::WriteOnly | QIODevice::Text))
		file.write(output.toStdString().c_str(), qstrlen(output.toStdString().c_str()));

	file.close();
	return true;
}

bool CSVManager::parseCSV(const QString &data, QList<QStringList> &dataList)
{

	QStringList zeilen = data.split("\n");
    int sizeOfColmn = -1;
	for (int i = 0; i < zeilen.size(); i++)
	{
        QStringList toPush = zeilen[i].split(";");
        if(sizeOfColmn == -1)
            sizeOfColmn = toPush.size();
        
        if(sizeOfColmn != toPush.size()){
            dataList.clear();
            QMessageBox::critical(nullptr, "Error", "Datei ist nicht in korrekter CSV-Format!");
            return false;
        }
		dataList.push_back(toPush);
	}

	return true;
}
