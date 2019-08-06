//============================================================================
// Name        : Complex_numbers.cpp
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
	Complex c2(c1);
	Complex c3 = c2;

	c2 = c1;
	cout << c2 << "\t" << c3 << endl;
	return 0;
}
