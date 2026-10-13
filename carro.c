#include <stdio.h> 

#include <locale.h> 
int main(void)
{
	setlocale(LC_ALL, "");
	int kmi,kmf,litros;
	float valor;
	printf("Diz os kms iniciais");
	scanf_s("%d", &kmi); 
	printf("diz os kms finais ");
	scanf_s("%d", &kmf);
	printf("diz a quantidade litros de gasolina que foram gastos aos 100km");
	scanf_s("d%", &litros);
	valor=litros*100/(kmf-kmi);
		if (valor>5)
		{
			printf("És rico");
				}
	else
		{
			printf("Escolheste bem esse Toyota");
			reurn 0;
}
