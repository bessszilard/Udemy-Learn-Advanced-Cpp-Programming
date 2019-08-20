/*
 * Mandelbrot.cpp
 *
 *  Created on: Aug 19, 2019
 *      Author: szilard
 */
#include <ccomplex>
#include "Mandelbrot.h"

using namespace std;

namespace caveofprogramming {

Mandelbrot::Mandelbrot() {
	// TODO Auto-generated constructor stub

}

Mandelbrot::~Mandelbrot() {
	// TODO Auto-generated destructor stub
}

int Mandelbrot::getIteration(double x, double y) {
//	complex<double> z = 0;
//	complex<double> c(x, y);
//
//	int iteration = 0;
//	while(iteration < MAX_ITERATION) {
//		z = z * z + c;
//
//		if (abs(z) > 2) {
//			break;
//		}
//		iteration++;
//	}
//	return iteration;
	complex<double> z = 0;
	complex<double> c(x, y);

	int iterations = 0;

	while(iterations < MAX_ITERATION) {
		z = z*z + c;

		if(abs(z) > 2) {
			break;
		}

		iterations++;
	}

	return iterations;
}

} /* namespace caveofprogramming */
