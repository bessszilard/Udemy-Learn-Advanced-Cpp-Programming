/*
 * Zoomlist.cpp
 *
 *  Created on: Aug 20, 2019
 *      Author: szilard
 */

#include "Zoomlist.h"
#include <iostream>

using namespace std;
namespace caveofprogramming {

Zoomlist::Zoomlist(int width, int height) : m_width(width), m_height(height) {
	// TODO Auto-generated constructor stub
}

void Zoomlist::add(const Zoom &zoom) {
	zooms.push_back(zoom);

	m_xCenter += (zoom.x - m_width  / 2) * m_scale;
	m_yCenter += (zoom.y - m_height / 2) * m_scale;
	m_scale *= (zoom.scale);
}

pair<double, double> Zoomlist::doZoom(int x, int y) {
//	zooms[0];

	double xFractal = (x - m_width  / 2) * m_scale + m_xCenter;
	double yFractal = (y - m_height / 2) * m_scale + m_yCenter;

	return pair<double, double>(xFractal , yFractal);
}


} /* namespace caveofprogramming */
