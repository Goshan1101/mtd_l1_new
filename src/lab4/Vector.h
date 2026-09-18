#pragma once
#include <iostream>
#include "Mysatur.h"

template <typename T> class Vector {
	T* v;
	int sz;
	Vector(Vector& a) : v(new T[a.sz]), sz(a.sz) {
		for (int i = 0; i < sz; i++) v[i] = a.v[i];
	}
public:
	Vector(int s = 2, int m = 0) { // (4,5)
		if (s < 1 || m < 0) throw 1; //неверный размер
		v = new T[s]();
		if (v == 0) throw 2; //нет памяти
		sz = s;
		if (m != 0) {
			for (int i = 0; i < s; i++) {
				v[i] = T(m);
			}
		}
	}

	T& operator[](int ind) { return v[ind]; if (ind < 0 || ind >= sz) throw 3; } //неверный индекс
	~Vector() { delete[]v; } 
	inline int size() { return sz; }
	void print(void) {//????
		std::cout << "[";
		for (int i = 0; i < sz; i++) {
			std::cout << v[i];
			if (i < sz - 1) std::cout << ", ";
		}
		std::cout << "]";
	}
	inline T& elem(int i) { return v[i]; }
	void operator=(const Vector& a) {
		delete[] v;
		sz = a.sz;
		v = new T[sz];
		for (int i = 0; i < sz; i++) v[i] = a.v[i];
	}


	Vector operator+(Vector& a) {
		int s = size();
		if (s != a.size()) throw 4; // Ошибка, разные размеры
		Vector sum(s);
		for (int i = 0; i < s; i++) sum.elem(i) = elem(i) + a.elem(i);
		return sum;
	};
};

void Vector<Mysatur>::print(void) {//???
	printf("[");
	for (int i = 0; i < sz; i++) {
		v[i].print();
		printf(", ");
	}
	printf("]");
}