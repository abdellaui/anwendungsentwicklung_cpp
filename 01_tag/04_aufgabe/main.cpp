#include <iostream>
#include <QtCore>
#include <vector>

int callByValue(std::vector<int> input) {
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += input.at(i);
	}
	return sum;
}

int callByValue(const QVector<int> input) {
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += input[i];
	}
	return sum;
}


int callByRef(const std::vector<int> & input) {
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += input.at(i);
	}
	return sum;
}

int callByRef(const QVector<int> & input) {
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += input[i];
	}
	return sum;
}




int main() {
	std::cout << "working hard..." << std::endl;
	const int max = 10000000;
	std::vector<int> stdVector(max, 0);
	QVector<int> qtVector(max, 0);
	for(int i = 0; i < max; i++) {
		stdVector.at(i) = i;
		qtVector[i] = i;
	}
	QElapsedTimer timer;
	timer.start();
	for (int i = 0; i < 100; i++) {
		callByValue(stdVector);
	}
	qint64 stdVectorElapsed = timer.nsecsElapsed();


	timer.restart();
	for (int i = 0; i < 100; i++) {
		callByValue(qtVector);
	}
	qint64 qVectorElapsed = timer.nsecsElapsed();


	timer.restart();
	for (int i = 0; i < 100; i++) {
		callByRef(stdVector);
	}
	qint64 stdVectorRef = timer.nsecsElapsed();



	timer.restart();
	for (int i = 0; i < 100; i++) {
		callByRef(qtVector);
	}
	qint64 qVectorRef = timer.nsecsElapsed();





	std::cout <<"value std: "<< stdVectorElapsed << std::endl;
	std::cout <<"value q:   "<< qVectorElapsed << std::endl;

	std::cout << "ref  std: " << stdVectorRef << std::endl;
	std::cout << "ref  q:   " << qVectorRef << std::endl;
	return 0;

}