#include <stdio.h>
int main()
{
    float a = 0;
    printf("Ingresa distancia en centimetros: ");
    scanf("%f", &a);   
    if (a < 0) {
        printf("No existen distancias negativas");
        return 0;
    }
    printf("Distancia en Kilometros %.5f \n",a/100000);
    
    printf("Distancia en metros %.2f \n",a/100);
    
    printf("Distancia en centimetros %.2f \n",a);
    return 0;
}