//============================================================================
// Name        : L42_Nested_Template_Classes.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ring.h"
using namespace std;

int main() {
	ring<int>::iterator *it;

//	ring<string> textRing(3);
//	textRing.add("one");
//	textRing.add("two");
//	textRing.add("three");
//	textRing.add("four");
//
//	for(int i = 0; i < textRing; ++i) {
//		cout << tetring.get(i) << endl;
//	}


	cout << "ring: " << it << endl; // prints !!!Hello World!!!
	return 0;
}
