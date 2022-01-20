#include <stdio.h>
#include <locale.h>

/*
	Pergunta 21, variante c
		Escreva um programa que pe�a ao utilizador o m�s (1 a 12) e
		indique o n� de dias que esse m�s tem (considere fevereiro sempre com 28 dias):
			c) Usando o switch sem qualquer break
*/

void prog0319_c() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int mes, n_dias = 0;
	printf("Introduza o n�mero de dias do m�s (1...12): ");
	scanf_s("%d", &mes);

	//NOTA: todos os meses t�m pelo menos 28 dias.
	//		No entanto, alguns t�m que apresentar 30 dias (2+28) e outros 31 dias (1+2+28)
	switch (mes) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		n_dias = 1;

	case 4:
	case 6:
	case 9:
	case 11:
		n_dias = n_dias + 2;

	default:
		n_dias = n_dias + 28;
	}

	printf("O m�s %d tem %d dias\n", mes, n_dias);
}