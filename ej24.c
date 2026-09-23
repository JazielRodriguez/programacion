#include <stdio.h>
int main()
{
    int arreglo[10];
    int i = 0;
    int mayor = 0;
    int menor = 0;
    int posmayor = 0;
    int posmenor = 0;
    int suma = 0;
    int resta = 0;
    long long producto = 1;
    for (i = 0; i < 10; i++)
    {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    mayor = arreglo[0];
    menor = arreglo[0];
    suma = arreglo[0];
    resta = arreglo[0];
    producto = arreglo[0];
    for (i = 1; i < 10; i++)
    {
        suma = suma + arreglo[i];
        resta = resta - arreglo[i];
        producto = producto * arreglo[i];
        if (arreglo[i] > mayor)
        {
            mayor = arreglo[i];
            posmayor = i;
        }
        if (arreglo[i] < menor)
        {
            menor = arreglo[i];
            posmenor = i;
        }
    }
    printf("Mayor: %d en la posicion %d \n", mayor, posmayor);
    printf("Menor: %d en la posicion %d \n", menor, posmenor);
    printf("Suma: %d \n", suma);
    printf("Resta: %d \n", resta);
    printf("Multiplicacion: %lld \n", producto);
    return 0;
}
