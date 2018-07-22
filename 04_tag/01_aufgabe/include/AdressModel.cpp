// mymodel.cpp
#include "AdressModel.h"
AdressModel::AdressModel(const QString &path, QObject *parent)
	: QAbstractTableModel(parent)
{
	m_sqlManager = new SQLManager(path);
	m_sqlManager->readDB(dataList);

}
AdressModel::~AdressModel()
{
	delete m_sqlManager;
}

int AdressModel::rowCount(const QModelIndex &parent) const
{
	return dataList.count() - 1;
}

int AdressModel::columnCount(const QModelIndex &parent) const
{
	int toRet = 1;
	if (dataList.count() > 1)
		toRet = dataList.at(0).count()-1;
	return toRet;
}

QVariant AdressModel::data(const QModelIndex &index, int role) const
{
	if (index.isValid())
	{

		if (role == Qt::DisplayRole || role == Qt::EditRole)
		{
			return dataList.at(index.row() + 1).at(index.column()+1);
		}
	}
	return QVariant();
}

bool AdressModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
	if (index.isValid())
	{
		if (role == Qt::EditRole)
		{
			dataList[index.row() + 1][index.column() + 1] = value.toString();
			if (!m_sqlManager->updateDB(dataList[index.row() + 1][0].toInt(), dataList[0][index.column() + 1].toLower(), value.toString())) {
				QMessageBox::information(nullptr, "Achtung", "Eintrag konnte nicht geändert werden!");
				return false;
			}
			Q_EMIT(dataChanged(index, index));
			return true;
		}
	}
	return false;
}

QVariant AdressModel::headerData(int section, Qt::Orientation orientation, int role) const
{
	if (dataList.count() > 0)
	{

		if (orientation == Qt::Horizontal && role == Qt::DisplayRole)
		{
			return dataList[0][section+1];
		}
	}
	return QAbstractTableModel::headerData(section, orientation, role);
}

Qt::ItemFlags AdressModel::flags(const QModelIndex &index) const
{

	Qt::ItemFlags flags;
	flags = QAbstractItemModel::flags(index);
	flags |= Qt::ItemIsEditable;
	flags |= Qt::ItemIsSelectable;
	return flags;
}

bool AdressModel::insertRows(int atRows, int count, const QModelIndex &parent)
{
		if (count < 1 || atRows < 0)
            return false;

		beginInsertRows(parent, atRows, count + atRows - 1);
		for (int y = 0; y < count; y++)
		{
			QStringList newList;
			newList << m_sqlManager->createRow();
			for (int x = 0; x < columnCount(); x++)
				newList << "(leer)";


			qDebug() << newList;

			dataList.push_back(newList);
		
		}

		endInsertRows();
		return true;

}
bool AdressModel::removeRows(int atRows, int count, const QModelIndex &parent)
{

		if (count < 1 || atRows < 0)
			return false;

		beginRemoveRows(parent, atRows-1, atRows-1+count-1);

		for (int x = 0; x < count; x++) {
			if(!m_sqlManager->deleteRow(dataList.at(atRows).at(0).toInt())){
			QMessageBox::information(nullptr, "Achtung", "Eintrag konnte nicht gelöscht werden!");
			return false;
			}
			dataList.removeAt(atRows + x);
		}
		
    

		endRemoveRows();
		return true;

}

void AdressModel::sort(int column, Qt::SortOrder order)
{
	Q_EMIT(layoutAboutToBeChanged());
	ownValidator valid;
	std::sort(dataList.begin() + 1, dataList.end(),
              [&column, &valid](const QStringList &a, const QStringList &b) {
		if (valid.validOnlyInt(a.at(column+1)) && valid.validOnlyInt(a.at(column+1)))
		{
			int x = a.at(column+1).toInt(nullptr, 10);
			int y = b.at(column+1).toInt(nullptr, 10);
			return x < y;
		}
		else
		{
			return a.at(column+1) < b.at(column+1);
		}
	});

	if (order == Qt::DescendingOrder)
		std::reverse(dataList.begin() + 1, dataList.end());

	Q_EMIT(layoutChanged());
}

bool AdressModel::store(const QString &filename)
{
	CSVManager man;
	return man.storeCSV(filename, dataList);
}

