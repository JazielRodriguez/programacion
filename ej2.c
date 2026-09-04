#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    printf("Ingresa el primer numero: ");
    scanf("%d",&a);
    printf("Ingresa el segundo numero: ");
    scanf("%d",&b);
    if (a == b) {    
    printf("Son iguales");
    }
    if (a < b) {
        printf("El segundo numero es mayor");
    }
    if (a > b) {
        printf("El primer numero es mayor");
    }
    return 0;
    
}