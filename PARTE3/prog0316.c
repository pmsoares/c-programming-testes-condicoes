#include <stdio.h>
#include <locale.h>

/*
	Pergunta 18 do teste
		Escreva um programa, de 4 formas distintas, que leia um n�mero e
		indique se esse inteiro � ou n�o igual a zero, utilizando no teste de condi��o:
			==
			!
			!=
			s� a vari�vel
*/

void prog0316() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int n;
	printf("Introduza um n�mero: ");
	scanf_s("%d", &n);

	//alinea a (com ==)
	// 
	//if (n == 0)
	//	printf("N�mero � igual a zero\n");
	//else
	//	printf("N�mero n�o � igual a zero\n");

	//alinea b (com !)
	// 
	//if (!n)
	//	printf("N�mero � igual a zero\n");
	//else
	//	printf("N�mero n�o � igual a zero\n");

	//alinea c (com !=)
	// 
	//if (n!=0)
	//	printf("N�mero n�o � igual a zero\n");
	//else
	//	printf("N�mero � igual a zero\n");

	//alinea d (s� com a vari�vel)
	if (n)
		printf("N�mero n�o � igual a zero\n");
	else
		printf("N�mero � igual a zero\n");
}