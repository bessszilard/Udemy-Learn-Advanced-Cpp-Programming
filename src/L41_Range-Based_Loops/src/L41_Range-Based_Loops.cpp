//============================================================================
// Name        : L41_Range-Based_Loops.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() {

	auto texts = {"one", "two", "three", "four" };

	for (auto text: texts) {
		cout << text << endl;
	}

	vector<int> numbers = {1, 2, 1, 4, 5, 7};

	for (auto number : numbers) {
		cout << number << "\t";
	}
	cout << endl;

	string greeting = "Hello";

	for (auto c: greeting) {
		cout << c << "\t";
	}
	cout << endl;

	list<int> numberlist;

	numberlist.push_back(5);
	numberlist.push_back(4);
	numberlist.push_back(3);
	numberlist.push_back(2);

	for(auto number : numberlist) {
		cout << number << "\t";
	}
	cout << endl;

	map<int, string> ids;
	ids[0] = "Mathias";
	ids[1] = "Crocodile";
	ids[2] = "Enthusiasm";

	for(auto id : ids) {
		cout << id.first << ": " << id.second << "\t";
	}
	cout << endl;

	return 0;
}
