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
#include "FractalCreator.h"

using namespace std;
using namespace caveofprogramming;

int main() {
	const int WIDTH = 800;
	const int HEIGHT = 600;
	Bitmap bitmap(WIDTH, HEIGHT);

	clock_t start_time = clock();

	FractalCreator fractal(WIDTH, HEIGHT);
	fractal.addZoom(Zoom(295, HEIGHT - 202, 0.1));
	fractal.addZoom(Zoom(312, HEIGHT - 304, 0.1));

	cout << "Iter calc:\t" << flush;
	fractal.calculateIterations();
	fractal.calculateTotalIterations();
	fractal.drawFractal();
	fractal.writeBitman("bitmap.bmp");
	cout << "100%" << endl << "Color calc:\t";
	clock_t end_time = clock();
	cout << "100%" << endl;

	cout << "Finished. " << (end_time - start_time) * 1.0 / CLOCKS_PER_SEC << endl; // prints !!!Hello World!!!
	return 0;
}
