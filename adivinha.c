#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int contador = 0, n;
	srand(time(NULL));
	int num = rand() % 1000 + 1;
	do {
		printf("Diz um numero\n");
		scanf_s("%i", &n);
		if (n == num)
			printf("acertaste congrats\n");
		else if (n > num)
			printf(",menor");
		else
			printf(",maior");
	} while (num != n);
}