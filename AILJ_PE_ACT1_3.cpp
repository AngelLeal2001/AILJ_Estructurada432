#include <stdio.h>
#include <math.h>

int main()
{

    int cal1, cal2, cal3, prom;

    printf("Dame la calificacion #1 (DE 0 A 100): ");
    scanf("%i", &cal1);

    printf("Dame la calificacion #2 (DE 0 A 100): ");
    scanf("%i", &cal2);

    printf("Dame la calificacion #3 (DE 0 A 100): ");
    scanf("%i", &cal3);

    prom = (cal1 + cal2+ cal3) / 3;

    printf("El promedio del alumno es de: %i", prom);

    if (prom < 30){
        printf("\n Repetir");
    }

    else {

        if(prom < 60){
            printf("\n extraordinario");
        }

        else{

            if(prom < 70){
                printf("\n suficiente");
            }

            else{
                if(prom < 80){
                    printf("\n regular");
                }

                else{
                    if(prom < 90){
                        printf("\n bien");
                    }

                    else{
                        if(prom < 98){
                            printf("\n muy bien");
                        }

                        else{
                            if(prom <=100){
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