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

private:
	void calculateIterations();
	void calculateTotalIterations();
	void drawFractal();
	void writeBitman(string name);

public:
	FractalCreator(const int width, const int height);
	void addZoom(const Zoom &zoom);
	virtual ~FractalCreator();
	void run(string fileName);
};

} /* namespace caveofprogramming */

#endif /* FRACTALCREATOR_H_ */
