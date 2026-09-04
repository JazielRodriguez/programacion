#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("Ingresa el primer numero: ");
    scanf("%d", &a);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &b);
    printf("Ingresa el tercer numero: ");
    scanf("%d", &c);
    if (a == b && a == c)
    {
        printf("Los numeros son iguales");
        return 0;
    }
    if (a == b || b == c || a == c)
    {
        printf("Dos numeros son iguales");
        return 0;
    }
    printf("Los numeros son distintos");
    return 0;
}