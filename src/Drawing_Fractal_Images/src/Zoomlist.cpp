/*
 * Zoomlist.cpp
 *
 *  Created on: Aug 20, 2019
 *      Author: szilard
 */

#include "Zoomlist.h"

namespace caveofprogramming {

Zoomlist::Zoomlist(int width, int height) : m_width(width), m_height(height) {
	// TODO Auto-generated constructor stub
}

void Zoomlist::add(const Zoom &zoom) {
	zooms.push_back(zoom);
}

pair<double, double> Zoomlist::doZoom(int x, int y) {
	return pair<double, double>(0, 0);
}


} /* namespace caveofprogramming */
