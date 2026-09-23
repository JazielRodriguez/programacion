#include <stdio.h>
int main()
{
    int i = 0;
    int a = 0;
    int pos = 0;
    int neg = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("Ingresa el numero %d: ", i);
        scanf("%d", &a);
        if (a > 0)
        {
            pos++;
        }
        if (a < 0)
        {
            neg++;
        }
    }
    printf("Positivos: %d \n", pos);
    printf("Negativos: %d \n", neg);
    printf("Ceros: %d \n", 10 - pos - neg);
    return 0;
}
