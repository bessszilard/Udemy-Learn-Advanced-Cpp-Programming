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

	cout << m_xCenter << ", " << m_yCenter << ", " << m_scale << endl;
}

pair<double, double> Zoomlist::doZoom(int x, int y) {
//	zooms[0];

//	double xFractal = (double)(x - zooms[0].x) * 2.0 / m_height * zooms[0].scale;
//	double yFractal = (double)(y - zooms[0].y) * 2.0 / m_height * zooms[0].scale;


	return pair<double, double>(0, 0);
}


} /* namespace caveofprogramming */
