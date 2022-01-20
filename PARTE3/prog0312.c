#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que leia uma opera��o bin�ria entre dois n�meros inteiros e apresente
	de seguida o resultado dessa opera��o sobre os n�meros.
		Operadores aceites:
		+		soma
		-		subtra��o
		* x X	multiplica��o
		/ \ :	divis�o
*/

void prog0312() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int num1, num2, res = 0;
	char op;
	printf("Introduza uma express�o: ");
	scanf_s("%d %c %d", &num1, &op, 1, &num2);

	switch (op) {
	case '+':
		res = num1 + num2;
		break;

	case '-':
		res = num1 - num2;
		break;

	case '*':
	case 'x':
	case 'X':
		res = num1 * num2;
		break;

	case '/':
	case '\\':
	case ':':
		res = num1 / num2;
		break;
	}

	printf("%d %c %d = %d\n", num1, op, num2, res);
}