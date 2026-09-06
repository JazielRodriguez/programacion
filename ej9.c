#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char dia[20] = "";
    int i = 0;
    printf("Ingrese el dia de la semana: ");
    scanf("%s", dia);
    int l = strlen(dia);
    while (i <= l)
    {
        dia[i] = tolower(dia[i]);
        i++;
    }
    if (strcmp(dia, "lunes") == 0)
    {
        printf("Es lunes");
        return 0;
    }
    if (strcmp(dia, "viernes") == 0)
    {
        printf("Es viernes");
        return 0;
    }
    if (strcmp(dia, "sabado") == 0 || strcmp(dia, "domingo") == 0)
    {
        printf("Es fin de semana");
        return 0;
    }
    printf("Es cualquier otra cosa, ponte a chambear");
    return 0;
}