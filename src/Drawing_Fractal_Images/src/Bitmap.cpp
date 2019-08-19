/*
 * Bitmap.cpp
 *
 *  Created on: Aug 19, 2019
 *      Author: szilard
 */

#include "Bitmap.h"

namespace caveofprogramming {

Bitmap::Bitmap(int width, int height) : m_width(width), m_height(height),
										m_pPixels(new uint8_t[width * height * 3]) {

}

void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {

}

bool Bitmap::write( string filename ) {
	return true;
}



Bitmap::~Bitmap() {
	// TODO Auto-generated destructor stub
}

} /* namespace caveofprogramming */
