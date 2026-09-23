#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char simbolos[17] = "0123456789ABCDEF";
    int digitos[64];
    char cadena[65] = "";
    int n = 0;
    int i = 0;
    int j = 0;
    int l = 0;
    int op = 0;
    int base = 0;
    int valor = 0;
    int resultado = 0;
    int d = 0;
    int valido = 0;
    char c = ' ';
    do
    {
        printf("\nMENU DE CONVERSIONES \n");
        printf("1. Decimal a binario \n");
        printf("2. Binario a decimal \n");
        printf("3. Decimal a octal \n");
        printf("4. Octal a decimal \n");
        printf("5. Decimal a hexadecimal \n");
        printf("6. Hexadecimal a decimal \n");
        printf("7. Salir \n");
        printf("Opcion: ");
        scanf("%d", &op);
        if (op == 1 || op == 3 || op == 5)
        {
            if (op == 1)
            {
                base = 2;
            }
            if (op == 3)
            {
                base = 8;
            }
            if (op == 5)
            {
                base = 16;
            }
            printf("Ingresa el numero decimal: ");
            scanf("%d", &valor);
            if (valor < 0)
            {
                printf("El numero debe ser positivo \n");
            }
            else
            {
                n = 0;
                if (valor == 0)
                {
                    digitos[n] = 0;
                    n++;
                }
                while (valor > 0)
                {
                    digitos[n] = valor % base;
                    valor = valor / base;
                    n++;
                }
                printf("Resultado en base %d: ", base);
                for (i = n - 1; i >= 0; i--)
                {
                    printf("%c", simbolos[digitos[i]]);
                }
                printf("\n");
            }
        }
        if (op == 2 || op == 4 || op == 6)
        {
            if (op == 2)
            {
                base = 2;
            }
            if (op == 4)
            {
                base = 8;
            }
            if (op == 6)
            {
                base = 16;
            }
            printf("Ingresa el numero en base %d: ", base);
            scanf("%s", cadena);
            l = strlen(cadena);
            resultado = 0;
            valido = 1;
            for (i = 0; i < l; i++)
            {
                c = toupper(cadena[i]);
                d = -1;
                for (j = 0; j < base; j++)
                {
                    if (simbolos[j] == c)
                    {
                        d = j;
                    }
                }
                if (d < 0)
                {
                    valido = 0;
                }
                else
                {
                    resultado = (resultado * base) + d;
                }
            }
            if (valido == 0)
            {
                printf("El numero %s no es valido en base %d \n", cadena, base);
            }
            else
            {
                printf("Resultado en decimal: %d \n", resultado);
            }
        }
        if (op == 7)
        {
            printf("Fin del programa \n");
        }
        if (op < 1 || op > 7)
        {
            printf("Opcion incorrecta \n");
        }
    } while (op != 7);
    return 0;
}
