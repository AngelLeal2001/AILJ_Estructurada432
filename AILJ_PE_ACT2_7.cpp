// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 27 de agosto del 2023
// Actividad 2_7
// leer 3 numeros y mencionar cual es el menor

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

    if (num1 < num2){
        if (num1 < num3){
            printf("\n El numero menor es el numero 1: %i", num1);
        }
        else{
            printf("\n El numero menor es el numero 3: %i", num3);
        }
    }

    else{
        if (num2 < num3){
            printf("\n El numero menor es el numero 2: %i", num2);
        }

        else{
            printf("\n El numero menor es el numero 3: %i", num3);
        }
    }


    return 0;
}