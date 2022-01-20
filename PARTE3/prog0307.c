#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que calcule o Salário Bruto, Salário Líquido e Imposto a pagar,
	seguindo a seguinte regra:
		Salário				Taxa
		<1000				5%
		>=1000 e <5000		11%
		>=5000				35%
*/

void prog0307() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float salario, taxa;

	printf("Qual o salário? ");
	scanf_s("%f", &salario);

	if (salario < 1000)
		taxa = (float).05;
	else
		if (salario < 5000)
			taxa = (float).11;
		else
			taxa = (float).35;

	printf("Salário Bruto: %.2f\tImposto: %.2f\tSalário Líquido: %.2f\n", salario, salario * taxa, salario * (1 - taxa));
}