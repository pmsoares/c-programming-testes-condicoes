#include <stdio.h>
#include <locale.h>

/*
	Pergunta 20 do teste
		Escreva um programa que verifique se um ano � bissexto ou n�o.

NOTA:
Quando � um ano bissexto?
	Um ano bissexto � um ano com 366 dias em vez de 365, cada 4 anos acrescenta-se um dia ao final do m�s de fevereiro.
	Este dia a mais � acrescentado, porque um ano n�o tem 365 mas sim 365,25 dias.
	Ao acrescentar um dia ao ano cada 4 anos este problema fica resolvido.

	Qualquer ano divis�vel por 4 � um ano bissexto, como 2016, 2020, 2024, 2028.

	Nota: A regra acima n�o se aplica a anos de s�culo.

	S�culos como 1900 e 2000 s� t�m um dia bissexto se forem divis�veis por 400.
		1900 � divis�vel por 4 e tamb�m por 100, mas n�o por 400, portanto, n�o � um ano bissexto.
	Isso significa que os s�culos s�o apenas um ano bissexto se forem divis�veis por 400.

	Portanto, 1900 n�o �, 2000 �, 2100, 2200, 2300 n�o �, mas 2400 � outro ano bissexto.
*/

void prog0318() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int ano;
	printf("Introduza um ano: ");
	scanf_s("%d", &ano);

	if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
		printf("%d � um ano bissexto\n", ano);
	else
		printf("%d n�o � um ano bissexto\n", ano);
}