//============================================================================
// Name        : L40_The_Auto_Keyword.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class T, class S>
auto add(T input1, S input2) -> decltype(input1 + input2) {
	return input1 + input2;
}

int get99() {
	return 99;
}

template<class T>
auto add_99(T input) -> decltype(input + get99()) {
	return input + get99();
}



int main() {
	auto x = 5;
	auto str = "Makkos";

	auto sum = add( 1, 3.1 );

	cout << x << endl;
	cout << str << endl;
	cout << sum << endl;
	cout << add_99(1.1) << endl;
	return 0;
}
