// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 8 de septiembre del 2023
// Actividad 2.1 (optimizacion de codigo)
// leer 3 calificaciones, obtener promedio y desplegar "Repetir", "Extraordinario", "suficiente", "regular", "bien", "muy bien", "excelente"

#include <stdio.h>
#include <stdlib.h>


void menu(void);
void calificacion(void);

//-----------------MAIN------------------
int main()
{
    menu();

    return 0;
}
//-----------------MENU------------------
void menu()
{
    int op;
    printf("Pulsa cualquier numero para avanzar\n");
    printf("Pulsa 0 para salir\n");
    scanf("%i",&op);
    system("CLS");

    if (op != 0)
    {
        calificacion();
    }
    else{
    system ("cls");
    printf("Que tenga un buen dia! :)");    
    }
}
//------------------CALIFICACION-------------------
void calificacion(void)

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
    printf("\n");
    system("PAUSE");
    system("cls");

    menu();
}