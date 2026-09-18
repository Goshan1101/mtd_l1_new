#pragma once
#include <stdio.h>
#include <cmath>
class Myfloat {
protected:
	int mant, exp;
public:
	Myfloat(double v) {
		exp = 0;
		while (v >= 1.0) {
			v /= 10;
			exp++;
		}
		while (v < 0.1) {
			v *= 10;
			exp--;
		}
		v *= 100000;
		mant = (int)v;
	}
	Myfloat(int p1, int p2) {
		mant = p1;
		exp = p2;
	}
	Myfloat() {
		mant = 0;
		exp = 0;
	}
	void print() {
		printf("%.5f[%d,%d] \n", mant / 100000.0 * pow(10, exp), mant, exp);
	}
	friend Myfloat operator+(Myfloat, Myfloat);
};