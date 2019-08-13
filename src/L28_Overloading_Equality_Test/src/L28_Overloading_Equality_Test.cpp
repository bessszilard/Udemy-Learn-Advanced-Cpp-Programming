//============================================================================
// Name        : L28_Overloading_Equality_Test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"
using namespace std;
using namespace caveofprogramming;

int main() {
	Complex c1(1, 2);
	Complex c2(1, 3);

//	if (c1 == c2) {
//		cout << "Complex numbers are equal";
//	}
//	else {
//		cout << "Complex numbers are not equal";
//	}

	if (c1 != c2) {
		cout << "Complex numbers are not equal";
	}
	else {
		cout << "Complex numbers are equal";
	}

	return 0;
}
