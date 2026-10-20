#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int n;
	do
	{
		printf("Diz um numero:\n");
		scanf_s("%i", &n);
		if (n < 0)
		{
			printf("o numero é negativo\n");
		}
		else if (n > 0)
		{
		printf("o numero é positivo");
	}while(num==0);
		printf("Vou me embora porque pressionaste 0\n");
	return 0;
}
