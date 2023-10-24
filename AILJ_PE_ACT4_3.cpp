// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 4 de septiembre del 2023
// Actividad 4.3
//3.- Programa en C que lea 6 números, desplegar el valor del número mayor.

#include<stdio.h>

int main()
{

    int num1, num2, num3, num4, num5, num6, mayor;

    printf("Numero 1: ");
    scanf("%i", &num1);

    printf("Numero 2: ");
    scanf("%i", &num2);

    printf("Numero 3: ");
    scanf("%i", &num3);

    printf("Numero 4: ");
    scanf("%i", &num4);

    printf("Numero 5: ");
    scanf("%i", &num5);

    printf("Numero 6: ");
    scanf("%i", &num6);

    mayor = num1;

    if (num2 > mayor)
    {
        mayor = num2;
    }

    if (num3 > mayor)
    {
        mayor = num3;
    }

    if (num4 > mayor)
    {
        mayor = num4;
    }

    if (num5 > mayor)
    {
        mayor = num5;
    }

    if (num6 > mayor)
    {
        mayor = num6;
    }

    printf("El numero mayor es : %i", mayor);

    return 0;
}