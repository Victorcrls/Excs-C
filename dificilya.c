#include<stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int qual;
	char continuar;
	char* carros[3] = { "Volvo","BMW","Mercedes\n" };
	do {
		printf("Diz um numero entre 1 e 3 banana\n");
		scanf_s("%i", &qual);
		printf("%s\n", carros[qual - 1]);

		if (qual < 0 || qual>4)
			printf("burro (1 to 3)\n");
		else
			printf("Queres continuar? (sim ou não)\n");
		getchar();
		scanf_s("%c", &continuar);
	} while (continuar != 'n');
	return 0;
}
