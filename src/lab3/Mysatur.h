#pragma once
#include <stdio.h>
#include "Myfloat.h"

class Mysatur : public Myfloat {
protected:
	int flag;
public:
	Mysatur() :Myfloat() {
		mant = 0;
		exp = 0;
		flag = 0;
	}

	Mysatur(Myfloat m) : Myfloat(m) {
		flag = 0;
		if (exp == 5 && mant == 99999) {
			mant = 99999;
			exp = 5;
			flag = 1;
		}
	}


	Mysatur(double v) :Myfloat(v) {
		flag = 0;
		if (exp >= 6) {
			mant = 99999;
			flag = 1;
		}
	}

	Mysatur(int p1, int p2) :Myfloat(p1, p2) {
		flag = 0;
		if (exp > 5 || mant > 99999) {
			mant = 99999;
			exp = 5;
			flag = 1;
		}
	}

	void print() {
		if (flag) {
			printf("*");
		}
		Myfloat::print();
	}
};
