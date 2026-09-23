#include <stdio.h>
int main()
{
    int h = 0;
    int m = 0;
    int s = 0;
    for (h = 0; h <= 23; h++)
    {
        for (m = 0; m <= 59; m++)
        {
            for (s = 0; s <= 59; s++)
            {
                printf("%02d:%02d:%02d \n", h, m, s);
            }
        }
    }
    printf("Fin de las 24 horas \n");
    return 0;
}
