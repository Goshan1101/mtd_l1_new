#include "Mysatur.h"

int main(void) {
	// Переменная 1
	double var1 = -70000.74;
	Mysatur num1(var1);
	num1.print();
	// Переменная 2
	double var2 = 80000.02;
	Mysatur num2(var2);
	num2.print();

	//Сумма
	printf("Summ \n");
	Mysatur summ(num1 + num2);//????
	//???? т.к Mysatur содержит Myfloat, когда видит оператор типа Myfloat, он просто обрезает Mysatur до Myfloat, так и преобразует
	//???? 
	summ.print();

	//Вычитание
	printf("Diff \n");
	Mysatur diff(num1 - num2);
	diff.print();

	//Умножение
	printf("Prod \n");
	Mysatur prod(num1 * num2);
	prod.print();

	//Деление
	printf("Devid \n");
	Mysatur devid(num1 / num2);
	devid.print();
}