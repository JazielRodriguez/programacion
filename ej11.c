#include <stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    int a = 0;
    int suma = 0;
    printf("Ingresa cuantos numeros vas a sumar: ");
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
        suma = suma + a;
    }
    printf("La suma de los %d numeros es %d \n", n, suma);
    return 0;
}
