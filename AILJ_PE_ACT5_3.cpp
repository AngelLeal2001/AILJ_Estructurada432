// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 11 de septiembre del 2023
// Actividad 5.3
// Generar N (35) cantidad de números (100 -200), desplegar al final el número mayor y el número menor. 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, num, nmenor, nmayor, i;

    N = 35;
    nmayor = -200;
    nmenor = 100;
    i=0;

    while (i < N)
    {
        num  = rand()%301 - 200;
        printf("%i\n", num);

        if (num > nmayor)
        {
            nmayor = num;
        }

        if (num < nmenor)
        {
            nmenor = num;
        }
        i+=1;
    }

    printf("\nNumero menor : %i", nmenor);
    printf("\nNumero mayor : %i", nmayor);

    return 0;
}