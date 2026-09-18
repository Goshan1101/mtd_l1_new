#include <stdlib.h>
#include "Vector.h"

vector::vector(int s) {
	if (s < 1) error("неверный размер");
	sz = s;
	v = new Mysatur[s];
	if (v == 0) error("нет памяти");

}

Mysatur& vector::operator[](int i) {
	if (i < 0 || i >= sz) error("неверный индекс");
	return v[i];
}

vector::~vector() { delete[]v; }

void vector::operator=(vector& a) {
	int s = size();
	if (s != a.size()) {
		delete[]v;
		sz = a.size();
		v = new Mysatur[sz];       //?????? Сделать чтобы менялся размер исходого, уравнивался
	}							
	for (int i = 0; i < s; i++) elem(i) = a.elem(i);
}

vector::vector(vector& a) :vector(a.size()) {
	int s = a.size();
	for (int i = 0; i < s; i++) elem(i) = a.elem(i);
}

vector vector::operator+(vector& a) {
	int s = size();
	if (s != a.size()) error("456");
	vector sum(s);
	for (int i = 0; i < s; i++) sum.elem(i) = elem(i) + a.elem(i);
	return sum;
}

void vector::print() {
	printf("[");
	for (int i = 0; i < sz; i++) {
		v[i].print();
		printf(", ");
	}
	printf("]");
}

void error(const char* p) {
	printf(p); exit(1);
}