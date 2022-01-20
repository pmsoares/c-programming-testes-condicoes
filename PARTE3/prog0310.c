#include <stdio.h>
#include <locale.h>

/*
	Implemente um programa que, dada uma letra, indique qual o estado civil de uma pessoa:
		S - Solteiro
		C - Casado
		D - Divorciado
		V - Viúvo
		(outra letra) - Inválido
*/

void prog0310() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char estado_civil;
	puts("Qual o estado civil?");
	estado_civil = getchar();

	/*if (estado_civil == 'S' || estado_civil == 's')
		puts("Solteiro");
	else
		if (estado_civil == 'C' || estado_civil == 'c')
			puts("Casado");
		else
			if (estado_civil == 'D' || estado_civil == 'd')
				puts("Divorciado");
			else
				if (estado_civil == 'V' || estado_civil == 'v')
					puts("Viúvo");
				else
					puts("Estado civil inválido!");
	*/
	switch (estado_civil) {
	case 'S':
	case 's':
		puts("Solteiro");
		break;

	case 'C':
	case 'c':
		puts("Casado");
		break;

	case 'D':
	case 'd':
		puts("Divorciado");
		break;

	case 'V':
	case 'v':
		puts("Viúvo");
		break;

	default:
		puts("Estado civil inválido!");
	}

	printf("\n\n");
}