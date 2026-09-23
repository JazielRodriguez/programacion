#include <stdio.h>
int main()
{
    int arreglo[10];
    int i = 0;
    int j = 0;
    int a = 0;
    int repetido = 0;
    while (i < 10)
    {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &a);
        repetido = 0;
        for (j = 0; j < i; j++)
        {
            if (arreglo[j] == a)
            {
                repetido = 1;
            }
        }
        if (repetido == 1)
        {
            printf("El numero %d ya se encuentra en el arreglo, ingresa otro \n", a);
        }
        else
        {
            arreglo[i] = a;
            i++;
        }
    }
    printf("Arreglo sin valores repetidos: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    return 0;
}
