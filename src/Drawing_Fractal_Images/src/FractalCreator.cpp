/*
 * FractalCreator.cpp
 *
 *  Created on: Aug 21, 2019
 *      Author: szilard
 */
#include <iostream>
#include "FractalCreator.h"
#include "Mandelbrot.h"
//#include "Bitmap.h"

namespace caveofprogramming {

FractalCreator::FractalCreator(const int width, const int height) :
m_width(width), m_height(height),
m_bitmap(m_width, m_height),
m_histogram(new int[Mandelbrot::MAX_ITERATIONS] {0}),
m_fractal(new int[m_width * m_height] {0}),
m_zoomlist(m_width, m_height) {
	m_zoomlist.add(Zoom(m_width / 2, m_height / 2, 4.0 / m_width));
}

FractalCreator::~FractalCreator() {
	// TODO Auto-generated destructor stub
}

void FractalCreator::calculateIterations() {
	for (int y = 0; y < m_height; y++) {
		for (int x = 0 ; x < m_width; x++) {
			pair<double, double> coords = m_zoomlist.doZoom(x, y);
			int iterations = Mandelbrot::getIteration(coords.first, coords.second);

			if ( iterations != Mandelbrot::MAX_ITERATIONS)
				m_histogram[iterations]++;

			m_fractal[y * m_width + x] = iterations;
		}
		static int progress = 0;
		if (progress != 10 * y / m_height ) {
			cout << 100 * y / m_height << "%\t" << flush;
			progress = 10 * y / m_height ;
		}
	}
}

void FractalCreator::calculateTotalIterations() {
	for(int i=0; i<Mandelbrot::MAX_ITERATIONS; ++i) {
		m_total += m_histogram[i];
	}
}

void FractalCreator::drawFractal() {
	for (int y = 0; y < m_height; y++) {
		for (int x = 0; x < m_width; x++) {
			uint8_t red = 0;
			uint8_t green = 0;
			uint8_t blue = 0;

			int iterations = m_fractal[y * m_width + x];

			if (iterations != Mandelbrot::MAX_ITERATIONS) {
				double hue = 0.0f;
				for (int i = 0; i <= iterations; ++i) {
					hue += (double) (m_histogram[i]) / m_total;
				}
				green = 255 * hue;
				blue = 255 * hue;
			}
			m_bitmap.setPixel(x, y, red, green, blue);
		}
	}
}

void FractalCreator::addZoom(const Zoom &zoom) {
	m_zoomlist.add(zoom);
}

void FractalCreator::writeBitman(string name) {
	m_bitmap.write(name);
}

} /* namespace caveofprogramming */
