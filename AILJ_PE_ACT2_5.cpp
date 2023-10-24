// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 25 de agosto del 2023
// Actividad 2_5
// leer 3 calificaciones y mostrar el promedio y ademas de:
//repetir, extraordinario, suficiente, regular, bien ,muy bien, excelente, error de promedio. Anidado por verdadero

#include <stdio.h>

int main()
{
    int cal1, cal2, cal3;
    float prom;

    printf("Dame la primera calificacion (0-100):\n ");
    scanf("%i", &cal1);

    printf("Dame la segunda calificacion (0-100):\n ");
    scanf("%i", &cal2);

    printf("Dame la tercera calificacion (0-100):\n ");
    scanf("%i", &cal3);

    prom = (cal1 + cal2 + cal3) / 3;

    printf("\n El promedio del alumno es de: %.2f", prom);

    if (prom >= 30){
        if (prom >= 60){
            if (prom >= 70){
                if (prom >= 80){
                    if(prom >=90){
                        if (prom >= 98){
                            if (prom == 100){
                                printf("\n Excelente");
                            }
                            else{
                                printf("\n Error de promedio");
                            }
                        }
                        else{
                            printf("\n Muy bien");
                        }
                    }
                    else{
                        printf("\n Bien");
                    }
                }
                else{
                    printf("\n regular");
                }
            }
            else{
                printf("\n suficiente");
            }
        }
        else{
            printf("\n extraordinario");
        }    
    }
    else{
        printf("\n repetir");
    }

    return 0;
}