//============================================================================
// Name        : Drawing_Fractal_Images.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdint.h>
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

	for (int x = 0 ; x < WIDTH; x++) {
		for (int y = 0; y < HEIGHT; y++) {
			double xFractal = (double)x * 2 / WIDTH - 1;
			double yFractal = (double)y * 2 / HEIGHT - 1;

			int iterations = Mandelbrot::getIteration(xFractal, yFractal);

			uint8_t red = (uint8_t)(256 * (double)iterations/Mandelbrot::MAX_ITERATION);

			cout << (int)red << "\t";

			bitmap.setPixel(x, y, red, red, red);

			if (red < min) min = red;
			if (max < red) max = red;
		}
		cout << endl;
	}

	cout << min << ", " << max << endl;

	bitmap.write("bitmap.bmp");
	cout << "Finished." << endl; // prints !!!Hello World!!!
	return 0;
}
