#pragma once
#include <stdio.h>
#include "function.h"

class Mysatur : public Myfloat {
protected:
	int flag;
public:
	Mysatur(Myfloat m): Myfloat(m) {
		func();
	}


	Mysatur(double v):Myfloat(v) {
		func();
	}

	Mysatur(int p1, int p2) :Myfloat(p1, p2) {
		func();
	}
	
	void print() {
		if (flag) {
			printf("*");
		}
		Myfloat::print();
	}

	void func(void) {
		flag = 0;
		if (exp == -1) {
			exp = 5; flag = 1;
		}
		if (exp >= 6) {
			if (mant > 0) mant = 99999;
			if (mant < 0) mant = -99999;    //??? убрал лишнее условие с мантисой(добавил нормирование) и функцию
			exp = -1;
			flag = 1;
		}
	}
};
