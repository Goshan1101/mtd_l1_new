#pragma once
#include "Figure.h"
#include "graphlib.h"

class GLine : public Figure {
	float dx0, dy0;
	float dx1, dy1;
public:
	GLine(float x01 = 0, float y01 = 0, float x11 = 50, float y11 = 50, float r1 = 255, float g1 = 255, float b1 = 255) : Figure() {
		x = (x01 + x11) / 2;
		y = (y01 + y11) / 2;  //точки привязки

		dx0 = x01 - x;
		dy0 = y01 - y;
		dx1 = x11 - x;
		dy1 = y11 - y;

		r = r1; g = g1; b = b1;
		draw();
	}

	~GLine() {
		erase();
	}

	void draw() {
		draw_line(x + dx0, y + dy0, x + dx1, y + dy1, r, g, b);

	}

	void erase() {
		draw_line(x + dx0, y + dy0, x + dx1, y + dy1, 0, 0, 0);
	}


};
