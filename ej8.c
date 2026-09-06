#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{
    int b = 0;
    int h = 0;
    float d = 0;
    printf("Ingresar base del rectangulo: ");
    scanf("%d", &b);
    printf("Ingresar altura del rectangulo: ");
    scanf("%d", &h);
    if (b <= 0 || h <= 0)
    {
        printf("Los valores deben ser mayores a 0");
        return 0;
    }
    d = sqrt(pow(b, 2) + pow(h, 2));
    printf("Area: %d \n", b * h);
    printf("Perimetro: %d \n", b + b + h + h);
    printf("Diagonal: %.2f \n", d);
    return 0;
}