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
	Complex c3 = c1 + c2;

	cout << c1 + c2 + c3 << endl;

	cout << c1 + 4 + c2 << endl;
	return 0;
}
