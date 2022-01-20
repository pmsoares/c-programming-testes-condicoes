#include <stdio.h>
#include <locale.h>

/*
	Pergunta 20 do teste
		Escreva um programa que verifique se um ano é bissexto ou não.

NOTA:
Quando é um ano bissexto?
	Um ano bissexto é um ano com 366 dias em vez de 365, cada 4 anos acrescenta-se um dia ao final do mês de fevereiro.
	Este dia a mais é acrescentado, porque um ano não tem 365 mas sim 365,25 dias.
	Ao acrescentar um dia ao ano cada 4 anos este problema fica resolvido.

	Qualquer ano divisível por 4 é um ano bissexto, como 2016, 2020, 2024, 2028.

	Nota: A regra acima não se aplica a anos de século.

	Séculos como 1900 e 2000 só têm um dia bissexto se forem divisíveis por 400.
		1900 é divisível por 4 e também por 100, mas não por 400, portanto, não é um ano bissexto.
	Isso significa que os séculos são apenas um ano bissexto se forem divisíveis por 400.

	Portanto, 1900 não é, 2000 é, 2100, 2200, 2300 não é, mas 2400 é outro ano bissexto.
*/

void prog0318() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int ano;
	printf("Introduza um ano: ");
	scanf_s("%d", &ano);

	if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
		printf("%d é um ano bissexto\n", ano);
	else
		printf("%d não é um ano bissexto\n", ano);
}