#pragma once
#include "Figure.h"
#include "graphlib.h"
#include <cmath>

class GArc : public Figure {
	float rad, start, end;
	float dx, dy;
public:
	GArc(float x01 = 0, float y01 = 0, float rad1 = 50, float start1 = 0, float end1 = 180, float r1 = 255, float g1 = 255, float b1 = 255) : Figure() {
		rad = rad1; start = start1; end = end1;
		r = r1; g = g1; b = b1;

		float startRad = start * 3.14f / 180.0f; //это перевод в радианы короче
		float endRad = end * 3.14f / 180.0f;

		float x_start = x01 + rad * cos(startRad);
		float y_start = y01 + rad * sin(startRad);
		float x_end = x01 + rad * cos(endRad);
		float y_end = y01 + rad * sin(endRad);

		x = (x_start + x_end) / 2.0f;
		y = (y_start + y_end) / 2.0f;

		dx = x01 - x;
		dy = y01 - y;

		draw();
	}

	~GArc() {
		erase();
	}

	void draw() {
		draw_arc(x + dx, y + dy, rad, start, end, r, g, b);

	}

	void erase() {
		draw_arc(x + dx, y + dy, rad, start, end, 0, 0, 0);
	}
};
