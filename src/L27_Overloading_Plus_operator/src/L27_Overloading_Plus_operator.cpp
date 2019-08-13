//============================================================================
// Name        : L27_Overloading_Plus_operator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
//============================================================================

#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;

int main() {
	Complex c1(1, 2);
	Complex c2(3, 4);
	Complex c3;

	c3 = c1 + c2;

	cout << c3 << endl;

	return 0;
}
