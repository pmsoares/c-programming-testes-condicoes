#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que leia dois n�meros e os apresente por ordem crescente.
*/

void prog0305() {
	setlocale(LC_ALL, "Portuguese_Portugal");
	int x, y, tmp;

	printf("Introduza dois n�meros inteiros: ");
	scanf_s("%d%d", &x, &y);

	if (x > y) {
		tmp = x;
		x = y;
		y = tmp;
	}

	printf("%d %d\n",x, y);
}