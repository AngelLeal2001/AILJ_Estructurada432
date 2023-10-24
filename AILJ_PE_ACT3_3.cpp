// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 1 de septiembre del 2023
// Actividad 3_3
// leer 3 numeros y mencionar los numeros de forma ascendente

#include <stdio.h>

int main ()
{
    int num1, num2, num3;

    printf("dame el numero 1: \n");
    scanf("%i", &num1);

    printf("dame el numero 2: \n");
    scanf("%i", &num2);

    printf("dame el numero 3: \n");
    scanf("%i", &num3);

    if (num1 < num2){
        if (num1 < num3){
            if (num3 < num2){
                printf("\n 1.- num 1: %i", num1); // 1  3   2
                printf("\n 2.- num 3: %i", num3);
                printf("\n 3.- num 2: %i", num2);
            }
            else{
                printf("\n 1.- num 1: %i", num1); // 1   2   3
                printf("\n 2.- num 2: %i", num2);
                printf("\n 3.- num 3: %i", num3);
            }
        }
        else{
            printf("\n 1.- num 3: %i", num3); //3    1    2
            printf("\n 2.- num 1: %i", num1);
            printf("\n 3.- num 2: %i", num2);
        }
    }
    else{
        if (num2 < num3){
            if (num3 < num1){
                printf("\n 1.- num 2: %i", num2); // 2    3    1
                printf("\n 2.- num 3: %i", num3);
                printf("\n 3.- num 1: %i", num1);
            }
            else{
                printf("\n 1.- num 2: %i", num2); // 2   1   3
                printf("\n 2.- num 1: %i", num1);
                printf("\n 3.- num 3: %i", num3);
            }
        }
        else{
            printf("\n 1.- num 3: %i", num3); // 3   2   1
            printf("\n 2.- num 2: %i", num2);
            printf("\n 3.- num 1: %i", num1);
        }
    }


    return 0;
}