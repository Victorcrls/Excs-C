#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int i, n, maior, menor, quantos;
	printf("Quantos numeros tem a lista bro");
	scanf_s("%d", &quantos);

	for (i = 0; i < quantos; i++)
	{
		printf("Diz os numeros");
		scanf_s("%d", &n);

		if (i == 0) {
			maior = n;
			menor = n;
		}
		else {
			if (n > maior) {
				maior = n;
			}
			if (n < menor) {
				menor = n;
			}
		}
	}


	printf("O maior número é %i\n", maior);
	printf("O menor número é %i\n", menor);

	return 0;
}
