#include <stdio.h>
int main()
{
    int a[10];
    int b[10];
    int i = 0;
    int j = 0;
    int comunes = 0;
    printf("Ingresa los 10 elementos del conjunto A \n");
    for (i = 0; i < 10; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("Ingresa los 10 elementos del conjunto B \n");
    for (i = 0; i < 10; i++)
    {
        printf("B[%d]: ", i);
        scanf("%d", &b[i]);
    }
    printf("Elementos que estan en los 2 conjuntos: ");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d ", a[i]);
                comunes++;
                break;
            }
        }
    }
    printf("\n");
    if (comunes == 0)
    {
        printf("Los conjuntos no tienen elementos en comun \n");
        return 0;
    }
    printf("Se encontraron %d elementos en comun \n", comunes);
    return 0;
}
