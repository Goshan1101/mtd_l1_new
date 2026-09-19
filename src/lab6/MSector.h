#pragma once
#include "Figure.h"
#include "GLine.h"


class MSector : public Figure {
	float x0, y0;
	float rad;
	float ang;

public:
	MSector(float x00, float y00, float rad0, float ang0, float r1 = 255, float g1 = 255, float b1 = 255) :Figure() {
		r = r1; g = g1; b = b1;
		x0 = x00; y0 = y00; rad = rad0; ang = ang0;


	}

	void draw() {
		
	}
};