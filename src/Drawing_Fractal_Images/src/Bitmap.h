/*
 * Bitmap.h
 *
 *  Created on: Aug 19, 2019
 *      Author: szilard
 */

#ifndef BITMAP_H_
#define BITMAP_H_

#include <string>
#include <stdint.h>
#include <memory>
//using namespace std;
using std::unique_ptr;
using std::string;

namespace caveofprogramming {

class Bitmap {
private:
	int m_width{0};
	int m_height{0};
	unique_ptr<uint8_t[]> m_pPixels{nullptr};

public:
	Bitmap(int width, int height);
	void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
	bool write( string filename );
	virtual ~Bitmap();
};

} /* namespace caveofprogramming */

#endif /* BITMAP_H_ */
