/*
 * FractalCreator.cpp
 *
 *  Created on: Aug 21, 2019
 *      Author: szilard
 */
#include <iostream>
#include "FractalCreator.h"
#include "Zoomlist.h"
#include "Mandelbrot.h"
#include "Bitmap.h"

namespace caveofprogramming {

FractalCreator::FractalCreator(const int width, const int height) :
								m_width(width), m_height(height) {
//	// TODO Auto-generated constructor stub
//	Bitmap bitmap(m_width, m_height);
//	histogram(new int[Mandelbrot::MAX_ITERATIONS]{0});
//	fractal(new int[m_width * m_height]{0});
}

FractalCreator::~FractalCreator() {
	// TODO Auto-generated destructor stub
}

void FractalCreator::calculateIteration() {
//	for (int y = 0; y < m_height; y++) {
//		for (int x = 0 ; x < m_width; x++) {
//			pair<double, double> coords = zoomlist.doZoom(x, y);
//			int iterations = Mandelbrot::getIteration(coords.first, coords.second);
//
//			if ( iterations != Mandelbrot::MAX_ITERATIONS)
//				m_histogram[iterations]++;
//
//			m_fractal[y * m_width + x] = iterations;
//		}
//		static int progress = 0;
//		if (progress != 10 * y / m_height ) {
//			cout << 100 * y / m_height << "%\t" << flush;
//			progress = 10 * y / m_height ;
//		}
//	}
}
void drawFractal();
void addZoom(const Zoom &zoom);
void writeBitman(string name);

} /* namespace caveofprogramming */
