#include <stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    int a = 0;
    int b = 1;
    int c = 0;
    printf("Ingresa hasta que termino quieres la serie de Fibonacci: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("El termino debe ser mayor a 0");
        return 0;
    }
    printf("Serie de Fibonacci: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
