#include <stdio.h>
int main()
{
    int a[5];
    int b[5];
    int r[5];
    int i = 0;
    int op = 0;
    int escalar = 0;
    printf("Ingresa los 5 elementos del vector A \n");
    for (i = 0; i < 5; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("Ingresa los 5 elementos del vector B \n");
    for (i = 0; i < 5; i++)
    {
        printf("B[%d]: ", i);
        scanf("%d", &b[i]);
    }
    do
    {
        printf("\nMENU \n");
        printf("1. Suma de vector y escalar \n");
        printf("2. Resta de vector y escalar \n");
        printf("3. Suma de vectores \n");
        printf("4. Resta de vectores \n");
        printf("5. Salir \n");
        printf("Opcion: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Ingresa el escalar: ");
            scanf("%d", &escalar);
            for (i = 0; i < 5; i++)
            {
                r[i] = a[i] + escalar;
            }
            break;
        case 2:
            printf("Ingresa el escalar: ");
            scanf("%d", &escalar);
            for (i = 0; i < 5; i++)
            {
                r[i] = a[i] - escalar;
            }
            break;
        case 3:
            for (i = 0; i < 5; i++)
            {
                r[i] = a[i] + b[i];
            }
            break;
        case 4:
            for (i = 0; i < 5; i++)
            {
                r[i] = a[i] - b[i];
            }
            break;
        case 5:
            printf("Fin del programa \n");
            break;
        default:
            printf("Opcion incorrecta \n");
        }
        if (op >= 1 && op <= 4)
        {
            printf("Resultado: ");
            for (i = 0; i < 5; i++)
            {
                printf("%d ", r[i]);
            }
            printf("\n");
        }
    } while (op != 5);
    return 0;
}
