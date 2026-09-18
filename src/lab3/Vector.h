#pragma once
#include "Mysatur.h"

class vector {
	Mysatur* v;
	int sz;
public:
	vector(int s = 99);//+
	~vector();
	vector(vector& a);
	inline int size() { return sz; }
	Mysatur& operator [](int);
	void operator=(vector&);
	vector operator+(vector&);
	inline Mysatur& elem(int i) { return v[i]; }
	void print();
};
void error(const char* p);