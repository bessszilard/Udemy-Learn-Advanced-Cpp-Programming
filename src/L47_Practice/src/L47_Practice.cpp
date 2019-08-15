//============================================================================
// Name        : L44_Making_Classes_Iterable.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ring.h"

using namespace std;

int main() {
	ring<string> ringBuf(3);
	ring<string> ringBuf_str{"alpha", "beta", "gamma"};
//	ringBuf.add("one");
//	ringBuf.add("two");
//	ringBuf.add("three");
//	ringBuf.add("four");

	// C++ 98 style
	for(ring<string>::iterator it = ringBuf.begin(); it != ringBuf.end(); it++ ) {
		cout << *it << endl;
	}
	cout << endl;

	// C++ 11 style
//	for(auto item : ringBuf_str) {
//		cout << item << endl;
//	}

	return 0;
}
