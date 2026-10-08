#include <stdio.h> 

#include <locale.h> 
main(void)
{
	setlocale(LC_ALL, "");
	int l1;
	float area;
	float perimetro;
	printf("diz o lado do quadrado");
	scanf_s("%d", &l1);
	area = (l1 * l1);
	printf("A area é:%.1f\n", area);
	 perimetro = (l1 * 4);
	printf("O perimetro é:%.1f", perimetro);
	return 0;
}