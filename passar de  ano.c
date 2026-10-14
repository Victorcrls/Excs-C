#include <stdio.h> 

#include <locale.h> 
int main(void)
{
	setlocale(LC_ALL, "");
	float nota;
	printf("Escreve a nota");
	scanf_s("%f",&nota);
	if (nota < 9, 5)
	{
		printf("Aprovado");
	}
	else
	{
		printf("Reprovado");
	}
	return 0;
}