#pragma once
#include <QTCore>
#include <QVector>


class InsertSort : public QThread{
	Q_OBJECT
private:
	int input;
	QVector<int>  m_toSort;
protected:
	void run() override {
		insertionSort();
	};

public:
	InsertSort(int);

	void insertionSort();

Q_SIGNALS:
	void sortStatus(int);
public Q_SLOTS:
void requested() { this->requestInterruption(); }

};
