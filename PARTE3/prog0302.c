#include <stdio.h>
#include <locale.h>

/*
	Implemente um programa que indique se um n�mero � positivo (>=0) ou negativo.
*/

void prog0302() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int x;
	printf("Introduza um n�mero inteiros: ");
	scanf_s("%d", &x);

	if (x >= 0)
		printf("N�mero positivo!\n");
	else
		printf("N�mero negativo!\n");
}