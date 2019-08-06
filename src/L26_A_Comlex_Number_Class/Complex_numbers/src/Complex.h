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

	double getReal() const {
		return real;
	}
	double getImag() const {
		return imaginary;
	}

};
ostream &operator<<(ostream &out, const Complex &c);

}

#endif /* COMPLEX_H_ */
