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
#include <ctime>
#include <math.h>
#include "Bitmap.h"
#include "Mandelbrot.h"
#include "Zoomlist.h"

using namespace std;
using namespace caveofprogramming;

int main() {
	const int WIDTH = 800;
	const int HEIGHT = 600;
	Bitmap bitmap(WIDTH, HEIGHT);

//	double min = 9999999;
//	double max =-9999999;

	Zoomlist zoomlist(WIDTH, HEIGHT);

	zoomlist.add(Zoom(WIDTH / 2, HEIGHT / 2, 1));

	unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS]{0});
	unique_ptr<int[]> fractal(new int[WIDTH * HEIGHT]{0});

	cout << "Hist calc: \t";
	clock_t start_time = clock();
	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0 ; x < WIDTH; x++) {
			double xFractal = (double)(x - WIDTH/2 - 200) * 2.0 / HEIGHT;
			double yFractal = (double)(y - HEIGHT/2) * 2.0/ HEIGHT;

			int iterations = Mandelbrot::getIteration(xFractal, yFractal);

			if ( iterations != Mandelbrot::MAX_ITERATIONS)
				histogram[iterations]++;

			fractal[y * WIDTH + x] = iterations;

		}
		static int progress = 0;
		if (progress != 10 * y / HEIGHT ) {
			cout << 100 * y / HEIGHT << "%\t" << flush;
			progress = 10 * y / HEIGHT ;
		}
	}

	cout << "100%" << endl << "Color calc:\t";

	int total = 0;
	for(int i=0; i<Mandelbrot::MAX_ITERATIONS; ++i) {
		total += histogram[i];
	}

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0 ; x < WIDTH; x++) {
			uint8_t red   = 0;
			uint8_t green = 0;
			uint8_t blue  = 0;

			int iterations = fractal[y * WIDTH + x];

			if (iterations != Mandelbrot::MAX_ITERATIONS) {
				double hue = 0.0f;
				for (int i = 0; i <= iterations; ++i) {
					hue += (double) (histogram[i]) / total;
				}
				green = pow(255, hue);
				blue = pow(255, hue);
			}
			bitmap.setPixel(x, y, red, green, blue);
		}
		static int progress = 0;
		if (progress != 10 * y / HEIGHT ) {
			cout << 100 * y / HEIGHT << "%\t" << flush;
			progress = 10 * y / HEIGHT ;
		}
	}
	clock_t end_time = clock();
	cout << "100%" << endl;

	bitmap.write("bitmap.bmp");
	cout << "Finished. " << (end_time - start_time) * 1.0 / CLOCKS_PER_SEC << endl; // prints !!!Hello World!!!
	return 0;
}
