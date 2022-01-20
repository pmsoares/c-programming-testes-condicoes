#include <stdio.h>
#include <locale.h>

/*
	Alterar o programa anterior de forma a permitir ao utilizador visualizar
	os minutos, segundos ou décimos de segundo das horas introduzidas.
*/

void prog0315() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int n_horas;
	long res;
	char tipo;
	printf("Nº horas: ");
	scanf_s("%d", &n_horas);
	printf("O que mostrar (m, s, d)? ");
	scanf_s(" %c", &tipo, 1);

	res = n_horas;

	switch (tipo) {
	case 'd':
	case 'D':
		res = res * 10;

	case 's':
	case 'S':
		res = res * 60;

	case 'm':
	case 'M':
		res = res * 60;
	}

	printf("%dh --> %ld%c", n_horas, res, tipo);
}