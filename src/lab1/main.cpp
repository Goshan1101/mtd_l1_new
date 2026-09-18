
#include "function.h"

int main(void) {
	// Переменная 1
	double var1 = 153.74;
	Myfloat num1(var1);
	num1.print();
	// Переменная 2
	double var2 = 18.02;
	Myfloat num2(var2);
	num2.print();

	//Сумма
	printf("Summ \n");
	(num1 + num2).print();

	//Вычитание
	printf("Diff \n");
	(num1 - num2).print();

	//Умножение
	printf("Prod \n");
	(num1 * num2).print();

	//Деление
	printf("Devid \n");
	(num1 / num2).print();
}	