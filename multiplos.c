#include<stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int n;
	do {
		printf("diz um numero ");
		scanf_s("%i", &n);
		if (n != 0) {

			if (n % 3 == 0);
			{
				printf("o numero é multiplo de 3\n");
			}

			if (n % 5 == 0)
			{
				printf("o numero é divisor de 5\n");
			}
		}
	} while (n != 0);
	printf("bazei yh");
	return 0;
}