#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    printf("Ingresa el año actual: ");
    scanf("%d",&a);
    printf("Ingresa un año random: ");
    scanf("%d",&b);
    if (a < b) {    
    printf("Faltan %d años para llegar a %d", b-a,b);
    }
    if (a > b) {
        printf("Han pasado %d años desde %d", a-b,b);
    }
    return 0;
    
}