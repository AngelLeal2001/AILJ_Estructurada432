// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 25 de agosto del 2023
// Actividad 2_2
// algoritmo que lea 1 numero y mencione si es "PAR" o "IMPAR"

#include <stdio.h>

int main()
{
    int num;

    printf("Dame cualquier numero: ");
    scanf("%i", &num);

    if (num % 2 == 0){
        printf("El numero es PAR");
    }
    if (num % 2 == 1){
        printf("\n El numero es IMPAR");
    }

    return 0;
}