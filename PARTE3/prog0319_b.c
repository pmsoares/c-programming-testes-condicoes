#include <stdio.h>
#include <locale.h>

/*
	Pergunta 21, variante b
		Escreva um programa que pe�a ao utilizador o m�s (1 a 12) e
		indique o n� de dias que esse m�s tem (considere fevereiro sempre com 28 dias):
			b) Usando o switch
*/

void prog0319_b() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int mes, n_dias;
	printf("Introduza o n�mero de dias do m�s (1...12): ");
	scanf_s("%d", &mes);

	switch (mes) {
	case 2:
		n_dias = 28;
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		n_dias = 30;
		break;

	default:
		n_dias = 31;
	}

	printf("O m�s %d tem %d dias\n", mes, n_dias);
}