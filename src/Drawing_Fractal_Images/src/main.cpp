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
	Bitmap bitmap(800, 600);

	bitmap.write("bitmap.bmp");

	cout << "Finished." << endl; // prints !!!Hello World!!!
	return 0;
}
