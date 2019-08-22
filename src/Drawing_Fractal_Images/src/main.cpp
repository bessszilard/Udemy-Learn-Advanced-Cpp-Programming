//============================================================================
// Name        : Drawing_Fractal_Images.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Mandelbrot drawer
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
#include "RGB.h"
using namespace std;
using namespace caveofprogramming;

int main() {
	const int WIDTH = 800;
	const int HEIGHT = 600;

	clock_t start_time = clock();

	FractalCreator fractal(WIDTH, HEIGHT);
	fractal.addRange(0.0, RGB(0, 0, 0));
	fractal.addRange(0.1, RGB(0, 128, 128));
	fractal.addRange(0.3, RGB(255, 255, 0));
	fractal.addRange(1.0, RGB(255, 255, 255));

//	fractal.addRange(0.0, RGB(0, 0, 0));
//	fractal.addRange(0.3, RGB(0, 0, 255));
//	fractal.addRange(0.5, RGB(0, 0, 0));
//	fractal.addRange(1.0, RGB(0, 0, 0));

	fractal.addZoom(Zoom(295, 202, 0.1));
	fractal.addZoom(Zoom(312, 304, 0.1));
	fractal.run("bitmap.bmp");
	clock_t end_time = clock();

	cout << "Finished. " << (end_time - start_time) * 1.0 / CLOCKS_PER_SEC << endl;
	return 0;
}
