#include <stdio.h>
int main(void)
{
    int v[10];
    int i, e, c = 0, t = 0;
    printf("diz 10 numeros:");
    for (i = 0; i < 10; i++)
    {
        scanf_s("%d", &v[i]);
    }
    printf("1 - queres saber quantos numeros tem?");
    printf("\n2 - ou queres somar?");
    scanf_s("%d", &e);
    i = 0;
    while (i < 10)
    {
        if (v[i] < 0)
        {
            c++;
            t = t + v[i];
        }
        i++;
    }
    switch (e)
    {
    case 1:
        printf("tem %d numeros negativos sua banana.", c);
        break;
    case 2:
        printf("toma essa soma seu amendoim %d.", t);
        break;
    }
    return 0;
}
