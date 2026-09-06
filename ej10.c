#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char dia[] = "";
    printf("Ingrese un caracter: ");
    scanf("%s", dia);
    int l = strlen(dia);
    if (l > 1)
    {
        printf("Solo debes ingresar un caracter: (a), (b)");
        return 0;
    }
    if (strcmp(dia, "a") == 0)
    {
        printf("Es vocal");
        return 0;
    }
    if (strcmp(dia, "e") == 0)
    {
        printf("Es vocal");
        return 0;
    }
    if (strcmp(dia, "i") == 0)
    {
        printf("Es vocal");
        return 0;
    }
    if (strcmp(dia, "o") == 0)
    {
        printf("Es vocal");
        return 0;
    }
    if (strcmp(dia, "u") == 0)
    {
        printf("Es vocal");
        return 0;
    }
    printf("No es vocal");
    return 0;
}