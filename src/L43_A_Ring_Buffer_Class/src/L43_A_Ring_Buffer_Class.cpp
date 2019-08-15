//============================================================================
// Name        : L43_A_Ring_Buffer_Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ring.h"
using namespace std;

int main() {
//	ring<int>::iterator *it;

	ring<string> textRing(3);
	textRing.add("one");
	textRing.add("two");
	textRing.add("three");
	textRing.add("four");
	textRing.add("five");

//	for(int i = 0; i < textRing.size(); ++i) {
//		cout << textRing.get(i) << endl;
//	}
	return 0;
}
