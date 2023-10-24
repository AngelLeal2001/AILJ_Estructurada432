// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 25 de agosto del 2023
// Actividad 2_3
// algoritmo que lea 4 calificaciones, mostrar promedio y mencionar si esta "APROBADO" o "REPROBADO" con condicion compuesta

#include <stdio.h>

int main()
{
    int cal1, cal2, cal3, cal4;
    float prom;

    printf("Dame la primera calificacion (0-100): ");
    scanf("%i", &cal1);

    printf("Dame la segunda calificacion (0-100): ");
    scanf("%i", &cal2);

    printf("Dame la tercera calificacion (0-100): ");
    scanf("%i", &cal3);

    printf("Dame la cuarta calificacion (0-100): ");
    scanf("%i", &cal4);

    prom = (cal1 + cal2 + cal3 + cal4) / 4;

    printf("\n El promedio del alumno es de: %.2f", prom);

    if (prom >= 60){
        printf("\n El alumno esta APROBADO");
    }
    else{
        printf("\n El alumno esta REPROBADO");
    }

    return 0;
}