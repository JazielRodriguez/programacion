#include <stdio.h>
int main()
{
    int x = 0;
    int y = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    int ejes = 0;
    printf("Ingresa coordenadas, la coordenada 0,0 termina la captura \n");
    printf("Ingresa x: ");
    scanf("%d", &x);
    printf("Ingresa y: ");
    scanf("%d", &y);
    while (x != 0 || y != 0)
    {
        if (x > 0 && y > 0)
        {
            c1++;
        }
        if (x < 0 && y > 0)
        {
            c2++;
        }
        if (x < 0 && y < 0)
        {
            c3++;
        }
        if (x > 0 && y < 0)
        {
            c4++;
        }
        if (x == 0 || y == 0)
        {
            ejes++;
        }
        printf("Ingresa x: ");
        scanf("%d", &x);
        printf("Ingresa y: ");
        scanf("%d", &y);
    }
    printf("Primer cuadrante: %d \n", c1);
    printf("Segundo cuadrante: %d \n", c2);
    printf("Tercer cuadrante: %d \n", c3);
    printf("Cuarto cuadrante: %d \n", c4);
    printf("Sobre los ejes: %d \n", ejes);
    return 0;
}
