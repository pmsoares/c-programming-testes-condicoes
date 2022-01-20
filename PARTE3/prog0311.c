#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que calcule o imposto pago por mulheres e por homens,
	sabendo que as mulheres pagam 10% de imposto e os homens pagam +5% do que as mulheres.
*/

void prog0311() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float salario, imposto = 0.0;
	char genero;
	printf("Introduza o salário: ");
	scanf_s("%f", &salario);
	printf("Qual o género? ");
	scanf_s(" %c", &genero, 1);

	switch (genero) {
	case 'm':
	case 'M':
		imposto = (float)0.05;
		
	case 'f':
	case 'F':
		imposto = imposto + (float)0.10;
	}

	printf("Imposto a pagar: %.2f\n", salario * imposto);
}