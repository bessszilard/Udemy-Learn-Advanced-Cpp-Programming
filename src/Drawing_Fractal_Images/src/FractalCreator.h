/*
 * FractalCreator.h
 *
 *  Created on: Aug 21, 2019
 *      Author: szilard
 */

#ifndef FRACTALCREATOR_H_
#define FRACTALCREATOR_H_

#include <string>
#include <memory>
#include "Zoom.h"
#include "Zoomlist.h"
#include "Bitmap.h"

using namespace std;

namespace caveofprogramming {

class FractalCreator {
private:
	int m_width;
	int m_height;
	unique_ptr<int[]> m_histogram{nullptr};
	unique_ptr<int[]> m_fractal{nullptr};
	Zoomlist m_zoomlist;
	Bitmap m_bitmap;
	int m_total{0};

public:
	FractalCreator(const int width, const int height);
	virtual ~FractalCreator();

	void calculateIterations();
	void calculateTotalIterations();
	void drawFractal();
	void addZoom(const Zoom &zoom);
	void writeBitman(string name);
};

} /* namespace caveofprogramming */

#endif /* FRACTALCREATOR_H_ */
