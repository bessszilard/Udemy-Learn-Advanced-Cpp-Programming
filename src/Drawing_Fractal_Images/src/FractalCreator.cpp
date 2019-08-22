/*
 * FractalCreator.cpp
 *
 *  Created on: Aug 21, 2019
 *      Author: szilard
 */
#include <iostream>
#include "FractalCreator.h"
#include "Mandelbrot.h"
#include "Zoom.h"
#include "RGB.h"
#include "assert.h"
#include <math.h>

namespace caveofprogramming {

void FractalCreator::run(string fileName) {
	calculateIterations();
	calculateTotalIterations();
	calculateTotalRanges();
	drawFractal();
	writeBitman("bitmap.bmp");
}

void FractalCreator::addRange(double rangeEnd, const RGB &rgb){
	m_ranges.push_back(rangeEnd * Mandelbrot::MAX_ITERATIONS);
	m_colors.push_back(rgb);

	if(m_bGotFirstRange == true) {
		m_rangeTotals.push_back(0.0);
	}
	m_bGotFirstRange = true;
}

void FractalCreator::addZoom(const Zoom &zoom) {
	m_zoomlist.add(zoom);
}

FractalCreator::FractalCreator(const int width, const int height) :
m_width(width), m_height(height),
m_histogram(new int[Mandelbrot::MAX_ITERATIONS] {0}),
m_fractal(new int[m_width * m_height] {0}),
m_zoomlist(m_width, m_height),
m_bitmap(m_width, m_height) {
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
	cout << "100%" << endl;
}

void FractalCreator::calculateTotalIterations() {
	for(int i=0; i<Mandelbrot::MAX_ITERATIONS; ++i) {
		m_total += m_histogram[i];
	}
	cout << "Overall total1 " << m_total << endl;

}

void FractalCreator::calculateTotalRanges() {
	int rangeIndex = 0;
	for(int i=0; i<Mandelbrot::MAX_ITERATIONS; ++i) {
		m_rangeTotals[getRange(i)] += m_histogram[i];
	}
	int overalTotal = 0;
	for(auto value : m_rangeTotals) {
		cout << value << endl;
		overalTotal += value;
	}
	cout << "Overall total1 " << overalTotal << endl;
}

void FractalCreator::drawFractal() {
	for (int y = 0; y < m_height; y++) {
		for (int x = 0; x < m_width; x++) {
			int iterations = m_fractal[y * m_width + x];

			int range = getRange(iterations);
			RGB startColor = m_colors[range];
			RGB endColor   = m_colors[range + 1];
			RGB diffColor  = endColor - startColor;

			uint8_t red = 0;
			uint8_t green = 0;
			uint8_t blue = 0;

			if (iterations != Mandelbrot::MAX_ITERATIONS) {
				int totalPixels = 0;
				for (int i = 0; i <= iterations; ++i) {
					totalPixels += m_histogram[i];
				}
				red   = startColor.r + diffColor.r * totalPixels / m_rangeTotals[range];
				green = startColor.g + diffColor.g * totalPixels / m_rangeTotals[range];
				blue  = startColor.b + diffColor.b * totalPixels / m_rangeTotals[range];

//				red   = 255 * sin(((double)startColor.r + diffColor.r * totalPixels / m_rangeTotals[range]) / 255 * 360);
//				green = 255 * sin(((double)startColor.g + diffColor.g * totalPixels / m_rangeTotals[range]) / 255 * 360);
//				blue  = startColor.b + diffColor.b * totalPixels / m_rangeTotals[range];


//				red   = pow(255, (startColor.r + diffColor.r * totalPixels / m_rangeTotals[range]) / 255);
//				green = pow(255, (startColor.g + diffColor.g * totalPixels / m_rangeTotals[range]) / 255);
//				blue  = pow(255, (startColor.b + diffColor.b * totalPixels / m_rangeTotals[range]) / 255);

			}
			m_bitmap.setPixel(x, y, red, green, blue);
		}
	}
}

void FractalCreator::writeBitman(string name) {
	m_bitmap.write(name);
}


int FractalCreator::getRange(int iterations) const {
	int range = 0;

	for(uint i=1; i < m_ranges.size(); ++i) {
		range = i;

		if(m_ranges[i] > iterations) {
			break;
		}
	}
	range--;

	assert(range > -1);
	assert(range < m_ranges.size());

	return range;
}

} /* namespace caveofprogramming */
