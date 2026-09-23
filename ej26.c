#include <stdio.h>
int main()
{
    int arreglo[10];
    int i = 0;
    int buscado = 0;
    int encontrado = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    printf("Ingresa el numero que quieres buscar: ");
    scanf("%d", &buscado);
    for (i = 0; i < 10; i++)
    {
        if (arreglo[i] == buscado)
        {
            printf("El numero %d se encuentra en la posicion %d \n", buscado, i);
            encontrado++;
        }
    }
    if (encontrado == 0)
    {
        printf("El numero %d no se encuentra en el arreglo \n", buscado);
    }
    return 0;
}
