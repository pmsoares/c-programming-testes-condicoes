#include <stdio.h>
#include <locale.h>

/*
	Implemente um programa que indique se um número é positivo (>=0) ou negativo.
*/

void prog0302() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int x;
	printf("Introduza um número inteiros: ");
	scanf_s("%d", &x);

	if (x >= 0)
		printf("Número positivo!\n");
	else
		printf("Número negativo!\n");
}