#include "document.h"
#include "observer.h"
#include <sstream>
#include <vector>
#include <memory>
int main(int argc, char ** argv) {

	if (argc < 2) return 0;

	Document doc(argv[2]);

	int count = 0;
	std::stringstream ss(argv[1]);
	ss >> count;
	std::vector< std::unique_ptr<Observer> > current = std::vector< std::unique_ptr<Observer> >(count);

	for(int i = 0; i < count; i++) {
		current.at(i) = std::make_unique<Observer>();
		QObject::connect(&doc, SIGNAL(textChanged(QString)), current.at(i).get(), SLOT(onTextChanged(QString)));

	}

	doc.setText("testcase");

	current.clear();

	doc.setText("testcase");
	
}