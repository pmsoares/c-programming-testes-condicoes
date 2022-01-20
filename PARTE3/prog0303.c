#include <stdio.h>
#include <locale.h>

/*
	Implemente um programa que indique se o inteiro lido é zero ou não.
*/

void prog0303() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int x;
	printf("Introduza um número inteiros: ");
	scanf_s("%d", &x);

	if (x)
		printf("%d não é zero!!\n", x);
	else
		printf("%d é igual a zero!\n", x);
}