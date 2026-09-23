#include <stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    int a = 0;
    int suma = 0;
    int producto = 1;
    printf("Ingresa cuantos numeros vas a capturar: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("La cantidad debe ser mayor a 0");
        return 0;
    }
    for (i = 1; i <= n; i++)
    {
        printf("Ingresa el numero %d: ", i);
        scanf("%d", &a);
        if ((a % 2) == 0)
        {
            suma = suma + a;
        }
        else
        {
            producto = producto * a;
        }
    }
    printf("Suma de los pares: %d \n", suma);
    printf("Producto de los impares: %d \n", producto);
    return 0;
}
