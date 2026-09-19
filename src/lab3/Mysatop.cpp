#include "MySatur.h"

Myfloat operator+(Myfloat a, Myfloat b) {
	if (a.exp > b.exp) {
		while (a.exp != b.exp) {
			a.exp--;
			a.mant *= 10;
		}
	}
	else if (a.exp < b.exp) {
		while (a.exp != b.exp) {
			b.exp--;
			b.mant *= 10;
		}
	}
	long long smant = a.mant + b.mant;
	int sexp = a.exp;
	return Mysatur(smant, sexp);
}