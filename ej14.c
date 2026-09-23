#include <stdio.h>
int main()
{
    int a = 0;
    int max = 0;
    int veces = 0;
    int total = 0;
    printf("Ingresa numeros, el 0 termina la captura \n");
    printf("Numero: ");
    scanf("%d", &a);
    while (a != 0)
    {
        total++;
        if (total == 1 || a > max)
        {
            max = a;
            veces = 1;
        }
        else
        {
            if (a == max)
            {
                veces++;
            }
        }
        printf("Numero: ");
        scanf("%d", &a);
    }
    if (total == 0)
    {
        printf("No se ingreso ningun numero");
        return 0;
    }
    printf("El maximo es %d y se ingreso %d veces \n", max, veces);
    return 0;
}
