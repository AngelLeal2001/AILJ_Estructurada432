// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 1 de septiembre del 2023
// Actividad 3_1
// leer 3 calificaciones, obtener promedio y desplegar "Repetir", "Extraordinario", "suficiente", "regular", "bien", "muy bien", "excelente"

#include <stdio.h>

int main()
{
    int cal1, cal2, cal3;
    float prom;

    printf("Dame la primera calficacion: \n");
    scanf("%i", &cal1);

    printf("Dame la segunda calficacion: \n");
    scanf("%i", &cal2);

    printf("Dame la tercera calficacion: \n");
    scanf("%i", &cal3);

    prom = (cal1 + cal2 + cal3) / 3;

    printf("El promedio es: %.2f", prom);

    if (prom > 80)
    {
        if (prom > 98)
        {
            if (prom > 100)
            {
                printf("\nError de promedio");
            }
            else
            {
                printf("\nExcelente");
            }
        }
        else
        {
            if (prom > 90)
            {
                printf("\nMuy bien");
            }
            else
            {
                printf("\nBien");
            }
        }
    }
    else
    {
        if (prom > 60)
        {
            if (prom > 70)
            {
                printf("\nRegular");
            }
            else
            {
                printf("\nSuficiente");
            }
        }
        else
        {
            if (prom > 30)
            {
                printf("\nExtraordinario");
            }
            else
            {
                printf("\nRepetir");
            }
        }
    }


    return 0;
}