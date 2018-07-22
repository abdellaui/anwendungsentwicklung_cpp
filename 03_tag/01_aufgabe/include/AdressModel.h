// mymodel.h
#pragma once
#include <QAbstractTableModel>
#include "CSVManager.h"
#include <algorithm>
#include <iostream>
#include <QDebug>
#include "ownValidator.h"

class AdressModel : public QAbstractTableModel
{
	Q_OBJECT
  public:
	AdressModel(const QString &data, QObject *parent);
	~AdressModel();
	int rowCount(const QModelIndex &parent = QModelIndex()) const override;
	int columnCount(const QModelIndex &parent = QModelIndex()) const override;
	QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
	bool setData(const QModelIndex &index, const QVariant &value, int role) override;
	QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
	Qt::ItemFlags flags(const QModelIndex &index) const override;
	bool insertRows(int rows, int count, const QModelIndex &parent = QModelIndex()) override;
	bool removeRows(int rows, int count, const QModelIndex &parent = QModelIndex()) override;
	void sort(int column, Qt::SortOrder order = Qt::AscendingOrder) override;

	bool store(const QString &filename);

  private:
	CSVManager *manager;
	QList<QStringList> dataList;
};
