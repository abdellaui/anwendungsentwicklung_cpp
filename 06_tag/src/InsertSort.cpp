#include "..\include\InsertSort.h"

InsertSort::InsertSort(int toSort)
{
	input = toSort;
}

void InsertSort::insertionSort()
{
	for (int i = 0; i < input; i++)
		m_toSort.push_back((input-i));

	for (int i = 1; i < m_toSort.size(); i++) {
		if (this->isInterruptionRequested()) this->exit();
		int j = i - 1;
		int key = m_toSort.at(i);
		while (j > 0 && m_toSort.at(j) > key) {
			m_toSort[j + 1] = m_toSort[j];
			j = j - 1;
		}
		m_toSort[j + 1] = key;

		Q_EMIT(sortStatus(i));

	}
}