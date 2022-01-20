#include <stdio.h>
#include <locale.h>

/*
	Implemente um programa que solicite ao utilizador dois inteiros e, em seguida
	aplique todos os operadores relacionais do C aos inteiros lidos
*/

void prog0301() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int x, y;
	printf("Introduza 2 inteiros: ");
	scanf_s("%d%d", &x, &y);

	printf("O resultador de %d == %d : %d\n", x, y, x == y);
	printf("O resultador de %d >  %d : %d\n", x, y, x > y);
	printf("O resultador de %d >= %d : %d\n", x, y, x >= y);
	printf("O resultador de %d <  %d : %d\n", x, y, x < y);
	printf("O resultador de %d <= %d : %d\n", x, y, x <= y);
	printf("O resultador de %d != %d : %d\n", x, y, x != y);
}