/*
 * Complex.h
 *
 *  Created on: Aug 5, 2019
 *      Author: szilard
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>

using namespace std;

namespace caveofprogramming {
class Complex {
private:
    double real;
    double imaginary;

public:
	Complex();
	virtual ~Complex();
	Complex(double real, double imaginary); // : real(real), imaginary(imaginary) {}
	Complex(const Complex &other);
	const Complex &operator=(const Complex &other);
	bool operator==(const Complex &other);
	bool operator!=(const Complex &other);
	Complex operator*();

	double getReal() const {
		return real;
	}
	double getImag() const {
		return imaginary;
	}
	void setReal(double input) {
		real = input;
	}
	void setImag(double input) {
		imaginary = input;
	}
};
ostream &operator<<(ostream &out, const Complex &c);
Complex operator+(const Complex &c1, const Complex &c2);
Complex operator+(const Complex &c1, double d);
Complex operator+(double d, const Complex &c1);

}

#endif /* COMPLEX_H_ */
