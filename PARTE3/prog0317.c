#include <stdio.h>
#include <locale.h>

/*
	Pergunta 19 do teste
		Reescreva o programa anterior (pergunta 18 do teste) com um switch.
*/

void prog0317() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int n;
	printf("Introduza um n�mero: ");
	scanf_s("%d", &n);

	switch (n) {
	case 0:
		printf("N�mero � igual a zero\n");
		break;
	default:
		printf("N�mero n�o � igual a zero\n");
	}
}