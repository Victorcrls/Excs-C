#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int i, altura[30], idade[30], soma = 0;
	float media;
	for (i = 0; i <= 29; i++)
	{
		printf("diz a altura do %iº aluno", i + 1);
		scanf_s("%i", &altura[i]);
		printf("diz a idade do %iº aluno", i + 1);
		scanf_s("%i", &idade[i]);
		soma = soma + altura[i];
	}
	for (i = 0; i <= 29; i++)
	{
		if (idade[i] > 13 && altura[i] < soma / 30);
	}
	printf("%d os alunos têm altura inferior a media é %d", soma, media);

	return 0;
}