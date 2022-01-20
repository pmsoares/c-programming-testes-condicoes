#include <stdio.h>
#include <locale.h>

/*
	Pergunta 21, variante a
		Escreva um programa que peça ao utilizador o mês (1 a 12) e
		indique o nº de dias que esse mês tem (considere fevereiro sempre com 28 dias):
			a) Usando apenas a instrução de teste if-else
*/

void prog0319_a() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int mes, n_dias;
	printf("Introduza o número de dias do mês (1...12): ");
	scanf_s("%d", &mes);

	if (mes == 2)
		n_dias = 28;
	else
		if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
			n_dias = 30;
		else
			n_dias = 31;

	printf("O mês %d tem %d dias\n", mes, n_dias);
}