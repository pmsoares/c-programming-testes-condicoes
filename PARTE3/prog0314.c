#include <stdio.h>
#include <locale.h>

/*
	Alterar o programa anterior de forma a permitir ao utilizador visualizar
	os minutos, segundos ou décimos de segundo das horas introduzidas.
*/

void prog0314() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int n_horas;
	long res = 0;
	char tipo;
	printf("Nº horas: ");
	scanf_s("%d", &n_horas);
	printf("O que mostrar (m, s, d)? ");
	scanf_s(" %c", &tipo, 1);

	switch (tipo) {
	case 'm':
	case 'M':
		res = n_horas < 0 ? 0L : n_horas * 60L;
		break;

	case 's':
	case 'S':
		res = n_horas < 0 ? 0L : n_horas * 3600L;
		break;

	case 'd':
	case 'D':
		res = n_horas < 0 ? 0L : n_horas * 36000L;
		break;

	default:
		printf("Opção inválida!\n");
	}

	printf("%dh --> %ld%c", n_horas, res, tipo);
}