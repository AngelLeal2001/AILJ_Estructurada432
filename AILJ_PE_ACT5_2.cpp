// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 11 de septiembre del 2023
// Actividad 5.1
// generar 40 números aleatorios entre el 0 y 200, desplegarlos y mostrar si es par o impar , la cantidad pares e impares y la suma de los números pares o impares.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, num, par, impar, sumapar, sumaimpar, i;
    N = 40;
    par = 0;
    impar = 0;
    sumapar = 0;
    sumaimpar = 0;
    i=0;

    while (i < N)
    {
        num  = rand()%201;

        if (num % 2 == 0)
        {
            printf("%i", num);
            printf(" --> PAR\n");
            par = par + 1;
            sumapar = sumapar + num;
        }
        else
        {
            printf("%i", num);
            printf(" --> IMPAR\n");
            impar = impar + 1;
            sumaimpar = sumaimpar + num;
        }

        i+=1;
    }

    printf("\nNumeros pares : %i", par);
    printf("\nSuma de los numeros pares : %i", sumapar);

    printf("\nNumeros impares : %i", impar);
    printf("\nSuma de los numeros impares : %i", sumaimpar);

    return 0;
}