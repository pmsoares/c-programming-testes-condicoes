#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que indique quanto segundos tem um determinado número de horas
*/

void prog0313() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int n_horas;
	long n_seg;
	printf("Nº horas: ");
	scanf_s("%d", &n_horas);
	
	n_seg = n_horas < 0 ? 0L : n_horas * 3600L;

	printf("%d Horas tem %ld segundos\n", n_horas, n_seg);
}