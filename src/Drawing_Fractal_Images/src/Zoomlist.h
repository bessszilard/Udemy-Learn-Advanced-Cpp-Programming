/*
 * Zoomlist.h
 *
 *  Created on: Aug 20, 2019
 *      Author: szilard
 */

#ifndef ZOOMLIST_H_
#define ZOOMLIST_H_

#include <vector>
#include <utility>
#include "Zoom.h"

using namespace std;
namespace caveofprogramming {

class Zoomlist {
private:
	int m_width{0};
	int m_height{0};
	vector<Zoom> zooms;
public:
	Zoomlist(int width, int height);
	void add(const Zoom &zoom);
	pair<double, double> doZoom(int x, int y);
};

} /* namespace caveofprogramming */

#endif /* ZOOMLIST_H_ */
