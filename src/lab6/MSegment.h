#pragma once
#include "Figure.h"
#include "graphlib.h"
#include "GArc.h"
#include "GLine.h"
#include <cmath>

class MSegment : public Figure {
	GArc* arc;
	GLine* chord;
public:
	MSegment(float centerX = 0, float centerY = 0, float rad1 = 50,
		float start1 = 0, float end1 = 180,
		float r1 = 255, float g1 = 255, float b1 = 255) : Figure() {

		r = r1; g = g1; b = b1;

		float startRad = start1 * 3.14f / 180.0f;
		float endRad = end1 * 3.14f / 180.0f;

		float x_start = centerX + rad1 * cos(startRad);
		float y_start = centerY + rad1 * sin(startRad);
		float x_end = centerX + rad1 * cos(endRad);
		float y_end = centerY + rad1 * sin(endRad);

		x = (x_start + x_end) / 2.0f;
		y = (y_start + y_end) / 2.0f; // середина хорды, как у arc

		arc = new GArc(centerX, centerY, rad1, start1, end1, r1, g1, b1);
		chord = new GLine(x_start, y_start, x_end, y_end, r1, g1, b1);
	}

	~MSegment() {
		delete arc;
		delete chord;
	}

	void draw() {
		arc->draw();
		chord->draw();
	}

	void erase() {
		chord->erase();
		arc->erase();
	}
};