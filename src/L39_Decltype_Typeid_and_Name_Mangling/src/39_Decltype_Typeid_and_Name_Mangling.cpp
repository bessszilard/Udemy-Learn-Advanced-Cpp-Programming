//============================================================================
// Name        : 39_Decltype_Typeid_and_Name_Mangling.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <typeinfo>
using namespace std;

class Tester {
private:
	int x;

public:
	Tester() : x(0) {}

	int getX() {
		return x;
	}

	void setX(int x_) {
		x = x_;
	}

};
int main() {

	int integer = 5;
	string value = "almas pite";
	Tester testclass;

	cout << typeid(integer).name() << endl;

	decltype (testclass) x;

	cout << typeid(x).name() << endl;

	return 0;
}
