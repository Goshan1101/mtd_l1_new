#include "Vector.h"

int main(void) {
	vector b(10), c(100);
	vector ddd;
	//Присваивание и Индексация
	b[1] = 2;
	printf("Prisv i indx ");
	b[1].print();
	//Копирование
	printf("Copy ");
	vector a(b);
	b.print();
	printf("\n 0 Vector \n");
	ddd.print();
	//Оператор +
	printf("\n Operator+ ");
	c[1] = 3;
	(b[1] + c[1]).print();
	//Равно
	b = c;
	printf("Ravno\n");
	b.print();
}

