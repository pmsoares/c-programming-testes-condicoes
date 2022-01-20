#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que solicite um sal�rio ao utilizador e mostre o imposto a pagar:
		- se o sal�rio for negativo ou zero, mostra um erro respetivo
		- se for > 1000, paga 10% de imposto, sen�o paga apenas 5%
*/

void prog0306() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float salario;

	printf("Qual o sal�rio? ");
	scanf_s("%f", &salario);

	if (salario <= 0)
		printf("Sal�rio: valor inv�lido!\n");
	else
		if (salario > 1000)
			printf("Imposto = %.2f\n", salario * 0.10);
		else
			printf("Imposto = %.2f\n", salario * 0.05);
}