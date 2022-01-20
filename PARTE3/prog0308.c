#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que aplique uma taxa de imposto aos solteiros de 10% e de 9% aos casados.
*/

void prog0308() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float salario;
	char est_civil;

	printf("Qual o salário? ");
	scanf_s("%f", &salario);
	printf("Qual o estado civil? ");
	scanf_s(" %c", &est_civil, 1);

	if (est_civil == 'c' || est_civil == 'C')
		printf("Imposto: %.2f\n", salario * .09);
	else
		if (est_civil == 's' || est_civil == 'S')
			printf("Imposto: %.2f\n", salario * .1);
		else
			printf("Estado civil incorreto!!\n");
}