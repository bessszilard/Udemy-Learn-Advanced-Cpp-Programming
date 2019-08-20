//============================================================================
// Name        : Drawing_Fractal_Images.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdint.h>
#include <memory>
#include "Bitmap.h"
#include "Mandelbrot.h"
using namespace std;
using namespace caveofprogramming;

int main() {
	const int WIDTH = 800;
	const int HEIGHT = 600;
	Bitmap bitmap(WIDTH, HEIGHT);

	double min = 9999999;
	double max =-9999999;

	unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS]{0});

	for (int x = 0 ; x < WIDTH; x++) {
		for (int y = 0; y < HEIGHT; y++) {
			double xFractal = (double)(x - WIDTH/2 - 200) * 2.0 / HEIGHT;
			double yFractal = (double)(y - HEIGHT/2) * 2.0/ HEIGHT;

			int iterations = Mandelbrot::getIteration(xFractal, yFractal);

			if ( iterations != Mandelbrot::MAX_ITERATIONS)
				histogram[iterations]++;

			uint8_t color = (uint8_t)(256 * (double)iterations/Mandelbrot::MAX_ITERATIONS);

			color = color * color * color;

			bitmap.setPixel(x, y, 0, color, color);

			if (iterations < min) min = iterations;
			if (max < iterations) max = iterations;
		}
	}

	int counter = 0;
	for(int i = 0; i < Mandelbrot::MAX_ITERATIONS; ++i) {
		cout << histogram[i] << " " << flush;
		counter += histogram[i];
	}

	cout << endl;

	cout << counter << "; " << WIDTH * HEIGHT << endl;

	cout << min << ", " << max << endl;

	bitmap.write("bitmap.bmp");
	cout << "Finished." << endl; // prints !!!Hello World!!!
	return 0;
}
