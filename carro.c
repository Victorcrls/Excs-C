#include <stdio.h> 

#include <locale.h> 
int main(void)
{
	setlocale(LC_ALL, "");
	int kmi,kmf,litros;
	float kmi, kmf, litros;
	printf("Diz os kms iniciais");
	scanf_s("%f", &kmi); 
	printf("diz os kms finais ");
	fscanf_s("%f", &kmf);
	printf("diz a quantidade litros de gasolina que foram gastos aos 100km");
	scanf_s("%f", &litros);
	return 0;
}