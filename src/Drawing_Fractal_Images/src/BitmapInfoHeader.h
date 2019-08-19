/*
 * BitmapInfoHeader.h
 *
 *  Created on: Aug 19, 2019
 *      Author: szilard
 */

#ifndef BITMAPINFOHEADER_H_
#define BITMAPINFOHEADER_H_

#include <stdint.h>

using namespace std;

#pragma pack(2)

namespace caveofprogramming {

struct BitmapInfoHeader {
	int32_t headerSize{40};
	int32_t widht;
	int32_t height;
	int16_t planes{1};
	int16_t bitsPerPixel{24};
	int32_t compression{0};
	int32_t dataSize{0};
	int32_t horizontalResolution{2400};
	int32_t verticalResolution{2400};
	int32_t colors{0};
	int32_t importantColors{0};
};

}

#endif /* BITMAPINFOHEADER_H_ */
