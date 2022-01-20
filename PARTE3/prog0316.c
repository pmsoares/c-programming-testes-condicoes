#include <stdio.h>
#include <locale.h>

/*
	Pergunta 18 do teste
		Escreva um programa, de 4 formas distintas, que leia um número e
		indique se esse inteiro é ou não igual a zero, utilizando no teste de condição:
			==
			!
			!=
			só a variável
*/

void prog0316() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int n;
	printf("Introduza um número: ");
	scanf_s("%d", &n);

	//alinea a (com ==)
	// 
	//if (n == 0)
	//	printf("Número é igual a zero\n");
	//else
	//	printf("Número não é igual a zero\n");

	//alinea b (com !)
	// 
	//if (!n)
	//	printf("Número é igual a zero\n");
	//else
	//	printf("Número não é igual a zero\n");

	//alinea c (com !=)
	// 
	//if (n!=0)
	//	printf("Número não é igual a zero\n");
	//else
	//	printf("Número é igual a zero\n");

	//alinea d (só com a variável)
	if (n)
		printf("Número não é igual a zero\n");
	else
		printf("Número é igual a zero\n");
}