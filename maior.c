#include <stdio.h> 

#include <locale.h> 
int main(void)
{
	setlocale(LC_ALL, "");
	int p1, p2, p3;
	printf("Diz me um numero pt");
	scanf_s("%i", &p1);
	printf("Diz o segundo numero");
	scanf_s("%i", &p2);
	printf("Diz o terceiro numero");
	scanf_s("%i", &p3);
	if (p1 > p2 && p1 > p3)
	{
		printf("o maior numero é o primeiro");
	}
	else if (p2 > p3)
	{
		printf("p2");
	}
	return 0;
}