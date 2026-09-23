#include <stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    int suma = 0;
    printf("Ingresa cuantos multiplos de 3 vas a sumar: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("La cantidad debe ser mayor a 0");
        return 0;
    }
    for (i = 1; i <= n; i++)
    {
        printf("Multiplo %d: %d \n", i, i * 3);
        suma = suma + (i * 3);
    }
    printf("La suma de los primeros %d multiplos de 3 es %d \n", n, suma);
    return 0;
}
