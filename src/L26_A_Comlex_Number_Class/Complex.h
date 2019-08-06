//Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;
namespace complex_numbers {

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(); // : real(0.0f), imaginary(0.0f) {}
    // Complex(double real, double imaginary); // : real(real), imaginary(imaginary) {}
    // Complex(const Complex &other);
    
    // Complex operator+(const Complex &other) const {
    //     Complex sum;
    //     sum.real = real + other.real;
    //     sum.imaginary = imaginary + other.imaginary;
    //     return sum;
    // }
    // Complex operator=(const Complex &other);
    // ostream &operator<<(ostream &out, const Complex complex_num) {
    //     out << complex_num.real << " " << complex_numbers.imagine << "i";
    //     return out;
    // }
};

} /* namespace complex_numbers */
#endif

