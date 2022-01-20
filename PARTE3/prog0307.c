#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que calcule o Sal�rio Bruto, Sal�rio L�quido e Imposto a pagar,
	seguindo a seguinte regra:
		Sal�rio				Taxa
		<1000				5%
		>=1000 e <5000		11%
		>=5000				35%
*/

void prog0307() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float salario, taxa;

	printf("Qual o sal�rio? ");
	scanf_s("%f", &salario);

	if (salario < 1000)
		taxa = (float).05;
	else
		if (salario < 5000)
			taxa = (float).11;
		else
			taxa = (float).35;

	printf("Sal�rio Bruto: %.2f\tImposto: %.2f\tSal�rio L�quido: %.2f\n", salario, salario * taxa, salario * (1 - taxa));
}