#include <stdio.h>
int main()
{
    int arreglo[100];
    int n = 0;
    int i = 0;
    for (i = 1; i <= 100; i++)
    {
        if ((i % 2) == 0 && (i % 3) == 0)
        {
            arreglo[n] = i;
            n++;
        }
    }
    printf("Se encontraron %d numeros pares y multiplos de 3 entre 1 y 100 \n", n);
    printf("Numeros: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    return 0;
}
