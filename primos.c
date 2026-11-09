#include <stdio.h> 

#include <locale.h> 
int main(void)
{
	setlocale(LC_ALL, "");
	int num, i;
	printf("Diz um numero");
	scanf_s("i%", &num);
	for (i = num; i >= 1; i--);
	{
	if (num % i == 0);
	{
		contar++
	}
	{
		printf("O n é primo congrats\n");
	}
	{
		printf("O n não é primo mb\n");
	}
	return 0;
}