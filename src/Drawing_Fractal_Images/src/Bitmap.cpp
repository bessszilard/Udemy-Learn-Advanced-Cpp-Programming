/*
 * Bitmap.cpp
 *
 *  Created on: Aug 19, 2019
 *      Author: szilard
 */

#include <fstream>
#include "Bitmap.h"
#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"

using namespace caveofprogramming;

namespace caveofprogramming {

Bitmap::Bitmap(int width, int height) : m_width(width), m_height(height),
										m_pPixels(new uint8_t[width * height * 3]{}) {

}

void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {

}

bool Bitmap::write(string filename) {
	BitmapFileHeader fileHeader;
	BitmapInfoHeader fileInfo;

	fileHeader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader) +
						  m_width * m_height * 3;
	fileHeader.dataOffset = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

	fileInfo.width  = m_height;
	fileInfo.height = m_height;

	ofstream file;
	file.open(filename, ios::out | ios::binary);

	if(!file)
		return false;

	file.write((char *)&fileHeader, sizeof(fileHeader));
	file.write((char *)&fileInfo,   sizeof(fileInfo));
	file.write((char *)&m_pPixels,  m_width * m_height * 3);

	file.close();
	if(!file)
		return false;

	return true;
}



Bitmap::~Bitmap() {
	// TODO Auto-generated destructor stub
}

} /* namespace caveofprogramming */
