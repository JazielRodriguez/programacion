#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int r = 0;
    printf("Ingresa el primer numero: ");
    scanf("%d", &a);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &b);
    if (a <= 0 && b <= 0)
    {
        printf("Los numeros deben ser enteros positivos");
        return 0;
    }
    if (a > b)
    {
        r = a % b;
        if (r == 0)
        {
            printf("El  mayor (%d) es multiplo del menor (%d)", a, b);
            return 0;
        }
    }
    if (a < b)
    {
        r = b % a;
        if (r == 0)
        {
            printf("El  mayor (%d) es multiplo del menor (%d)", b, a);
            return 0;
        }
    }
    printf("No son multiplos");

    return 0;
}