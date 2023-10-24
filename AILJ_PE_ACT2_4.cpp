// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 25 de agosto del 2023
// Actividad 2_4
// algoritmo que indique elegir "1.- Hombre" o "2.- Mujer" y mostrar "Hola, eres hombre" o " mujer" con condicion cmompuesta.

#include <stdio.h>

int main()
{
    int sexo;

    printf("Hola, Cual es tu sexo?");
    printf("\n 1.- Hombre ");
    printf("\n 2.- Mujer \n" );
    scanf("%i", &sexo);

    if (sexo == 1){
        printf("\n Hola, eres un hombre");
    }
    else{
        if (sexo == 2){
            printf("\n Hola, eres una Mujer");
        }
        else{
            printf("\n Opcion invalida");
        }
    }

    return 0;
}