#include <stdio.h> 

#include <locale.h> 
int main(void)
{
	setlocale(LC_ALL, "");
	int n, soma = 0, i = 0;
	float media;
	do
	{
		printf("diz um numero");
		scanf_s("%i!", &n);
		soma = n + soma;
		i = i + 1;
	} while (soma < 1000);
	media = soma / i;
	printf("A media dos numeros q escreveste é %0.f e escreveste %i numeros ", media, i);
	return 0;
}
