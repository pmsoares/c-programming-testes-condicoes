#include <stdio.h>
#include <locale.h>

/*
	Implemente um programa que adicione 1000 ao sal�rio de um indiv�dulo,
	caso este seja inferior a 100000.
*/

void prog0304() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float salario;
	printf("Qual o sal�rio? ");
	scanf_s("%f", &salario);

	if (salario < 100000)
		salario += 1000; // salario = salario + 1000;
	
	printf("Sal�rio Final: %.2f\n", salario);

}