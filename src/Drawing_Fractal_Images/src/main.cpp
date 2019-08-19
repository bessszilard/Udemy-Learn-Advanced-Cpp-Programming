//============================================================================
// Name        : Drawing_Fractal_Images.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include "BitmapFileHeader.h"
//#include "BitmapInfoHeader.h"
#include "Bitmap.h"
using namespace std;
using namespace caveofprogramming;

int main() {
	const int WIDTH = 800;
	const int HEIGHT = 600;
	Bitmap bitmap(WIDTH, HEIGHT);

	for (int i = 0 ; i < WIDTH; ++i) {
		for (int j = 0; j < HEIGHT; ++j) {
			bitmap.setPixel(i, j, 128, 255, 255);
		}
	}

	bitmap.write("bitmap.bmp");
	cout << "Finished." << endl; // prints !!!Hello World!!!
	return 0;
}
