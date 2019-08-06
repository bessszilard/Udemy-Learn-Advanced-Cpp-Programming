/*
 * Complex.cpp
 *
 *  Created on: Aug 5, 2019
 *      Author: szilard
 */

#include "Complex.h"

namespace caveofprogramming {

Complex::~Complex() {}
Complex::Complex() : real(0.0f), imaginary(0.0f) {}
Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}
Complex::Complex(const Complex &other) {
	cout << "Copy" << endl;
	real = other.real;
	imaginary = other.imaginary;
}

const Complex &Complex::operator=(const Complex &other) {
	cout << "operator copy" << endl;
	real = other.real;
	imaginary = other.imaginary;
	return *this;
}

ostream &operator<<(ostream &out, const Complex &c);
	out << c.getReal() << "+ " << c.getImag() << "i " << endl;
	return out;
}

} /* namespace caveofprogramming */
