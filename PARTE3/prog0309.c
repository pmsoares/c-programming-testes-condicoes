#include <stdio.h>
#include <locale.h>

/*
Implementar um programa que calcule os aumentos de ordenado para o corrente ano.
Se o ordenado for > 1000 deve ser aumentado 5%, senão deve ser aumentado 7%.
*/

void prog0309() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float salario;
	printf("Introduza o salário: ");
	scanf_s("%f", &salario);

	/*if (salario > 1000)
		salario = salario * (float)1.05;
	else
		salario = salario * (float)1.07;
	*/

	salario = salario > 1000 ? salario * (float)1.05 : salario * (float)1.07;

	/*
		condição ? verdadeira : falsa;
	*/

	printf("Novo salário: %.2f\n", salario);
}