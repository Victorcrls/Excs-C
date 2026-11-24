#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	char* nomes[5] = { "Victor","Tom","Gonçalo","Sukhman","Clara" };
	int i;
	for (i = 4; i >= 0; i--)
	{
		printf("%s\n", nomes[i]);
	}
	return 0;
}
