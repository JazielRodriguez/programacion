#include <stdio.h>
int main()
{
    int arreglo[10];
    int i = 0;
    int j = 0;
    int aux = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }
    printf("Arreglo ordenado de forma ascendente: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    return 0;
}
