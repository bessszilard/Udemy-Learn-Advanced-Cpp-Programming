/*
 * BitmapFileHeader.h
 *
 *  Created on: Aug 19, 2019
 *      Author: szilard
 */

#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

 #include <stdint.h>
using namespace std;

#pragma pack(2)

namespace caveofprogramming {

struct BitmapFileHeader {
	char header[2]{'B', 'M'};
	int32_t fileSize;
	int32_t reserved{0};
	int32_t dataOffset;
};

}

#pragma pack(0)

#endif /* BITMAPFILEHEADER_H_ */
