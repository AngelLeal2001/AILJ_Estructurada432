// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 11 de septiembre del 2023
// Actividad 5.1
// pedir al usuario el valor de n, y desplegar todos los números enteros positivos menores de n en orden descendente. 

#include <stdio.h>
#include <stdlib.h>

void enteros (void);

int main()
{
    int n, i, nmenor;
    i = 1;
    
    printf("Dame el valor de n :");
    scanf("%i", &n);

    nmenor = n;

    while (i < n)
    {
        printf("%i\n", --nmenor);
        i+=1;

    }

    return 0;
}