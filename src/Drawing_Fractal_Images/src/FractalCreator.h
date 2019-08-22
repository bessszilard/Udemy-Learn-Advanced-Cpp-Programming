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
#include <vector>
#include "Zoom.h"
#include "Zoomlist.h"
#include "Bitmap.h"
#include "RGB.h"

using namespace std;

namespace caveofprogramming {

class FractalCreator {
private:
	int m_width;
	int m_height;
	unique_ptr<int[]> m_histogram;
	unique_ptr<int[]> m_fractal;
	Zoomlist m_zoomlist;
	Bitmap m_bitmap;
	int m_total{0};
	vector<int> m_ranges;
	vector<RGB> m_colors;

	vector<double> m_rangeTotals;
	bool m_bGotFirstRange{false};

private:
	void calculateIterations();
	void calculateTotalIterations();
	void calculateTotalRanges();
	void drawFractal();
	void writeBitman(string name);

public:
	FractalCreator(const int width, const int height);
	void addZoom(const Zoom &zoom);
	void addRange(double rangeEnd, const RGB &rgb);
	virtual ~FractalCreator();
	void run(string fileName);
};

} /* namespace caveofprogramming */

#endif /* FRACTALCREATOR_H_ */
