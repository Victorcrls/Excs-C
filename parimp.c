#include <stdio.h> 

#include <locale.h> 
int main(void)
{
	int n;
	setlocale(LC_ALL, "");
	do
	{
		printf("Diz um numero:\n");
		scanf_s("%i", &n);
		if (n != 0)
		{
			if (n % 2 == 0)
				printf("é 0 bazei");
			{
				printf("O numero é par\n");
			}
			else
			{
				printf("O numero é impar\n");
			}
		}
	} while (n != 0);
	return 0;
}