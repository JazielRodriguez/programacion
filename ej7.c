#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{
    int x1 = 0;
    int y1 = 0;
    float r = 0;
    int x2 = 0;
    int y2 = 0;
    bool esta = false;
    printf("Ingrese la coordenada x de la circuferencia: ");
    scanf("%d", &x1);
    printf("Ingrese la coordenada y de la circuferencia: ");
    scanf("%d", &y1);
    printf("Ingrese la coordenada x del punto: ");
    scanf("%d", &x2);
    printf("Ingrese la coordenada y del punto: ");
    scanf("%d", &y2);
    printf("Ingrese el radio de la circunferencia: ");
    scanf("%d", r);
    if (sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2))) == r)
    {
        esta = true;
    }
    esta ? printf("El punto esta en la circunferencia") : printf("El punto no esta en la circunferencia");
}