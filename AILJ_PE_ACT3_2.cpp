// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 1 de septiembre del 2023
// Actividad 3_2
// Algoritmo que lea 3 números y desplegar cuál número es del medio y su valor

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Dame el primer numero: \n");
    scanf("%i", &num1);

    printf("Dame el segundo numero: \n");
    scanf("%i", &num2);

    printf("Dame el tercer numero: \n");
    scanf("%i", &num3);

    if (num1 < num2)
    {
        if (num1 < num3)
        {
            if (num3 < num2)
            {
                printf("\n El numero del medio es el numero 3: %i", num3);
            }
            else
            {
                printf("\n El numero del medio es el numero 2: %i", num2);
            }
        }
        else
        {
            printf("\n El numero del medio es el numero 1: %i", num1);
        }
    }
    else
    {
        if (num2 < num3)
        {
            if (num3 < num1)
            {
                printf("\n El numero del medio es el numero 3: %i", num3);
            }
            else
            {
                printf("\n El numero del medio es el numero 1: %i", num1);
            }
        }
        else
        {
            printf("\n El numero del medio es el numero 2: %i", num2);
        }
    }
    return 0;
}