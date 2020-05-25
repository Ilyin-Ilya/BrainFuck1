#include"Checker.h"

Checker::Checker(Container cont) { this->container = cont; }

bool Checker::check(string str) {
	int counter = 0;
	try {
		for (int i = 0; i < str.size(); i++) {
			if (!container.count(str[i]))
				throw("Wrong char inputed!");
			if (str[i] == '[')
				counter++;
			else if (str[i] == ']')
				counter--;
			if (counter < 0)
				throw("Wrong bracket sequence!");
		}
	}
	catch (const char* exception) {
		cout << exception << endl;
		return false;
	}
	if(counter==0)
		return true;
	return false;
}