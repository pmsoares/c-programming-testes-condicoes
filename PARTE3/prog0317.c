#include <stdio.h>
#include <locale.h>

/*
	Pergunta 19 do teste
		Reescreva o programa anterior (pergunta 18 do teste) com um switch.
*/

void prog0317() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int n;
	printf("Introduza um número: ");
	scanf_s("%d", &n);

	switch (n) {
	case 0:
		printf("Número é igual a zero\n");
		break;
	default:
		printf("Número não é igual a zero\n");
	}
}