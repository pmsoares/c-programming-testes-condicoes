#include <stdio.h>
#include <locale.h>

/*
	Implemente um programa que indique se o inteiro lido � zero ou n�o.
*/

void prog0303() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int x;
	printf("Introduza um n�mero inteiros: ");
	scanf_s("%d", &x);

	if (x)
		printf("%d n�o � zero!!\n", x);
	else
		printf("%d � igual a zero!\n", x);
}