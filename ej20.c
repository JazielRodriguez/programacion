#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int secreto = 0;
    int a = 0;
    int intentos = 0;
    srand(time(NULL));
    secreto = rand() % 1001;
    printf("Adivina el numero secreto entre 0 y 1000 \n");
    do
    {
        printf("Ingresa tu numero: ");
        scanf("%d", &a);
        intentos++;
        if (a > secreto)
        {
            printf("El numero secreto es menor \n");
        }
        if (a < secreto)
        {
            printf("El numero secreto es mayor \n");
        }
    } while (a != secreto);
    printf("Adivinaste, el numero secreto era %d \n", secreto);
    printf("Lo lograste en %d intentos \n", intentos);
    return 0;
}
