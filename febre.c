#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	float valor;
	char type;
	printf("cel (C) ou Faren (F)?\n");
	scanf_s("%c", &type);

	if (type == 'C' || type == 'c') {
		printf("Diz lá qual é a temperatura em cel\n");
		scanf_s("%f", &valor);
		valor = (valor - 32) * 5 / 9;
		printf("Em faren é %2.f\n", valor);
	}
	else {
		printf("Diz lá qual é a temperatura em faren\n");
		scanf_s("%f", &valor);
		valor = (valor * 9 / 5) + 32;
		printf("Em é cel %2.f\n", valor);

	}

}