// mymodel.cpp
#include "AdressModel.h"
AdressModel::AdressModel(const QString &path, QObject *parent)
	: QAbstractTableModel(parent)
{
	manager = new CSVManager();
	QString data;
	manager->readCSV(path, data);
	manager->parseCSV(data, dataList);
}
AdressModel::~AdressModel()
{
	delete manager;
}

int AdressModel::rowCount(const QModelIndex &parent) const
{
	return dataList.count() - 1;
}

int AdressModel::columnCount(const QModelIndex &parent) const
{
	int toRet = 0;
	if (dataList.count() > 0)
		toRet = dataList.at(0).count();
	return toRet;
}

QVariant AdressModel::data(const QModelIndex &index, int role) const
{
	if (index.isValid())
	{

		if (role == Qt::DisplayRole || role == Qt::EditRole)
		{
			return dataList.at(index.row() + 1).at(index.column());
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
			dataList[index.row() + 1][index.column()] = value.toString();
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
			return dataList.at(0).at(section);
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
			for (int x = 0; x < columnCount(); x++)
				newList << "(leer)";
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

		for (int x = 0; x < count; x++)
			dataList.removeAt(atRows + x);
    

		endRemoveRows();
		return true;

}

void AdressModel::sort(int column, Qt::SortOrder order)
{
	Q_EMIT(layoutAboutToBeChanged());
    
	ownValidator valid;
	std::sort(dataList.begin() + 1, dataList.end(),
              [&column, &valid](const QStringList &a, const QStringList &b) {
		if (valid.validOnlyInt(a.at(column)) && valid.validOnlyInt(a.at(column)))
		{
			int x = a.at(column).toInt(nullptr, 10);
			int y = b.at(column).toInt(nullptr, 10);
			return x < y;
		}
		else
		{
			return a.at(column) < b.at(column);
		}
	});

	if (order == Qt::DescendingOrder)
		std::reverse(dataList.begin() + 1, dataList.end());

	Q_EMIT(layoutChanged());
}

bool AdressModel::store(const QString &filename)
{
	return manager->storeCSV(filename, dataList);
}

