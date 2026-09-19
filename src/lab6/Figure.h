#pragma once

class Figure {
protected:
	float r, g, b;
	float x, y;

public:
	virtual void draw() = 0;

	Figure() {
		x = 0; y = 0; r = 255; g = 255; b = 255;
	}

	virtual void erase() = 0;

	void move(int a, int b) {
		erase();
		x += a; y += b;
		draw();
	}
};
