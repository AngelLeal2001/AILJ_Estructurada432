// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 11 de septiembre del 2023
// Actividad 5.4
// desplegar la tabla de multiplicar de un número dado (número entre el 1 y 20).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, mult;
    mult = 1;
    i = 0;

    printf("Dame el valor de n (del 1 al 20): ");
    scanf("%i", &n);

    if(n<1 || n>20)
    {
        printf("Opcion no valida >:(");
    }
    else
    {
        printf("Tabla del %i", n);
        printf("\n");

        while (i<10)
        {
            printf("%i", n);
            printf(" X %i", mult);
            printf(" = ");

            printf("%i\n", n*mult);

            mult+=1;
            i+=1;
        }
    }

    return 0;
}