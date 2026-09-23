#include <stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    float a = 0;
    float max = 0;
    float min = 0;
    float suma = 0;
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
        scanf("%f", &a);
        suma = suma + a;
        if (i == 1)
        {
            max = a;
            min = a;
        }
        if (a > max)
        {
            max = a;
        }
        if (a < min)
        {
            min = a;
        }
    }
    printf("Maximo: %.2f \n", max);
    printf("Minimo: %.2f \n", min);
    printf("Promedio: %.2f \n", suma / n);
    return 0;
}
