/*
 * Mandelbrot.h
 *
 *  Created on: Aug 19, 2019
 *      Author: szilard
 */

#ifndef MANDELBROT_H_
#define MANDELBROT_H_

namespace caveofprogramming {

class Mandelbrot {
public:
	static const int MAX_ITERATION = 1000;

public:
	Mandelbrot();
	virtual ~Mandelbrot();
	static int getIteration(double x, double y);
};

} /* namespace caveofprogramming */

#endif /* MANDELBROT_H_ */
