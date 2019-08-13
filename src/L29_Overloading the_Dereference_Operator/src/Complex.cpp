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

bool Complex::operator==(const Complex &other) {
	return (real == other.getReal()) && (imaginary == other.getImag());
}

bool Complex::operator!=(const Complex &other) {
	return !(*this == other);
}

Complex Complex::operator*() {
	return Complex(real, -imaginary);
}

ostream &operator<<(ostream &out, const Complex &c) {
	out << "(" << c.getReal() << ", " << c.getImag() << "i) ";
	return out;
}

//Complex Complex::operator+(const Complex &other) {
//	Complex result;
//	result.setReal(real + other.getReal());
//	result.setImag(imaginary + other.getImag());
//	return result;
//}

Complex operator+(const Complex &c1, const Complex &c2) {
	return Complex(c1.getReal() + c2.getReal(), c1.getImag() + c2.getImag());
}

Complex operator+(const Complex &c1, double d) {
	return Complex(c1.getReal() + d, c1.getImag());
}
Complex operator+(double d, const Complex &c1) {
	return Complex(c1.getReal() + d, c1.getImag());
}

} /* namespace caveofprogramming */
