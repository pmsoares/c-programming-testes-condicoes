#include <stdio.h>
#include <locale.h>

/*
	Pergunta 22
		Escreva um programa que leia uma data e verifique se esta � v�lida ou n�o.
*/

void main() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int dia, mes, ano;
	printf("Data (dd/mm/aaaa): ");
	scanf_s("%d/%d/%d", &dia, &mes, &ano);
	switch (mes) {
	case 2:
		if (dia >= 1 && dia <= 28 + ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0))
			printf("Data V�lida\n");
		else
			printf("Data Inv�lida\n");
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		if (dia >= 1 && dia <= 30)
			printf("Data V�lida\n");
		else
			printf("Data Inv�lida\n");
		break;

	default:
		if (mes < 1 || mes > 12)
			printf("Data Inv�lida\n");
		else
			if (dia >= 1 && dia <= 31)
				printf("Data V�lida\n");
			else
				printf("Data Inv�lida\n");
	}
}