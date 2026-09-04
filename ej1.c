#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    int r = 0;
    printf("Ingresa el numerador: ");
    scanf("%d",&a);
    printf("Ingresa el denominador: ");
    scanf("%d",&b);
    if (b == 0) {    
    printf("El denominador debe ser distinto de 0");
    return 0;
    }
    if ((a%b) == 0) {
        printf("La division es exacta \n");
    }
    r = a /b;
    printf("El resultado es %d", r);
    return 0;
}