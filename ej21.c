#include <stdio.h>
int main()
{
    int primos[100];
    int n = 0;
    int i = 0;
    int j = 0;
    int divisores = 0;
    for (i = 2; i <= 100; i++)
    {
        divisores = 0;
        for (j = 1; j <= i; j++)
        {
            if ((i % j) == 0)
            {
                divisores++;
            }
        }
        if (divisores == 2)
        {
            primos[n] = i;
            n++;
        }
    }
    printf("Se encontraron %d numeros primos entre 1 y 100 \n", n);
    printf("Primos: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", primos[i]);
    }
    printf("\n");
    return 0;
}
