// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 27 de agosto del 2023
// Actividad 2_6
// leer 3 calificaciones y mostrar el promedio y ademas de:
//repetir, extraordinario, suficiente, regular, bien ,muy bien, excelente, error de promedio. Anidado por Falso

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

    if (prom < 30){
        printf("\n REPETIR");

    }
    else{
        if (prom < 60){
            printf("\n EXTRAORDINARIO");

        }
        else{
            if (prom < 70){
                printf("\n SUFICIENTE");

            }
            else{
                if (prom < 80){
                    printf("\n REGULAR");

                }
                else{
                    if (prom < 90){
                        printf("\n BIEN");

                    }
                    else{
                        if (prom < 98){
                            printf("\n MUY BIEN");
                        }
                        else{
                            if (prom <= 100){
                                printf("\n EXCELENTE");
                            }
                            else{
                                printf("\n ERROR DE PROMEDIO");
                            }
                            
                        }
                        }
                    }
                }
            }
        }
    return 0;
}