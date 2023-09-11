// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 8 de septiembre del 2023
// Actividad 2.7 (optimizacion de codigo)
// pedir mes y día de nacimiento y desplegar signo zodiacal que corresponde y su correspondiente horóscopo del Dia

#include <stdio.h>
#include <stdlib.h>

void menu(void);
void fecha(void);

int main()
{
    menu();

    return 0;
}
// --------------------- MENU ------------------------
void menu()
{
    int op;
    printf("Pulsa cualquier numero para avanzar\n");
    printf("Pulsa 0 para salir\n");
    scanf("%i",&op);
    system("CLS");

    if (op != 0)
    {
        fecha();
    }
    else{
    system ("cls");
    printf("Que tenga un buen dia! :)");    
    }
}
// -------------------- FECHA ------------------------
void fecha(void)
{
    int dia, mes;

    printf("Dia de nacimiento : ");
    scanf("%i", &dia);

    printf("\nMes de nacimiento : ");
    printf("\n1.- Enero");
    printf("\n2.- Febrero");
    printf("\n3.- Marzo");
    printf("\n4.- Abril");
    printf("\n5.- Mayo");
    printf("\n6.- Junio");
    printf("\n7.- Julio");
    printf("\n8.- Agosto");
    printf("\n9.- Septiembre");
    printf("\n10.- Octubre");
    printf("\n11.- Noviembre");
    printf("\n12.- Diciembre");
    printf("\n : ");
    scanf("%i", &mes);

    system("cls");

    switch (mes)
    {
        case 1://----------------ENERO-------------------
        printf("\nEnero");
        if (dia <= 31)
        {
            if (dia <= 19)
            {
                printf("\nTu signo zodiacal es Capricornio");
                printf("\nCapricornio: 22 de Diciembre - 19 de Enero");
            }
            else{
                printf("\nTu signo zodiacal es Acuario");
                printf("\nAcuario: 20 de Enero - 18 de Febrero");
            }
        }
        else{
            printf("\nERROR: el dia no existe");
        }
        break;

        case 2://-------------------FEBRERO--------------------------
        printf("\nFebrero");
        if (dia <= 29)
        {
            if (dia <= 18)
            {
                printf("\nTu signo zodiacal es Acuario");
                printf("\nAcuario: 20 de Enero - 18 de Febrero");
            }
            else{
                printf("\nTu signo zodiacal es Piscis");
                printf("\nPiscis: 19 de Febrero - 20 de Marzo");
            }
        }
        else{
            printf("\nERROR: el dia no existe");
        }
        break;

        case 3://-------------------MARZO------------------------
        printf("\nMarzo");
        if (dia <= 31)
        {
            if (dia <= 20)
            {
                printf("\nTu signo zodiacal es Piscis");
                printf("\nPiscis: 19 de Febrero - 20 de Marzo");
            }
            else{
                printf("\nTu signo zodiacal es Aries");
                printf("\nAries: 21 de Marzo - 19 de abril");
            }
        }
        else{
            printf("\nERROR: el dia no existe");
        }
        break;

        case 4://------------------------ABRIL---------------------
        printf("\nAbril");
        if (dia <= 30)
        {
            if (dia <= 19)
            {
                printf("\nTu signo zodiacal es Aries");
                printf("\nAries: 21 de Marzo - 19 de abril");
            }
            else{
                printf("\nTu signo zodiacal es Tauro");
                printf("\nTauro: 20 de Abril - 20 de Mayo");
            }
        }
        else{
            printf("\nERROR: el dia no existe");
        }
        break;

        case 5://------------------------MAYO----------------------------
        printf("\nMayo");
        if (dia <= 31)
        {
            if (dia <= 20)
            {
                printf("\nTu signo zodiacal es Tauro");
                printf("\nTauro: 20 de Abril - 20 de Mayo");
            }
            else{
                printf("\nTu signo zodiacal es Geminis");
                printf("\nGeminis: 21 de Mayo - 20 de Junio");
            }
        }
        else{
            printf("\nERROR: el dia no existe");
        }
        break;

        case 6://-----------------------JUNIO--------------------------
        printf("\nJunio");
        if (dia <= 31)
        {
            if(dia <= 20)
            {
                printf("\nTu signo zodiacal es Geminis");
                printf("\nGeminis: 21 de Mayo - 20 de Junio");
            }
            else{
                printf("\nTu signo zodiacal es Cancer");
                printf("\nCancer: 21 de Junio - 22 de Julio");
            }
        }
        else{
            printf("\nERROR: el dia no existe");
        }
        break;

        case 7://------------------JULIO-------------------
        printf("\nJulio");
        if (dia <= 30)
        {
            if (dia <= 22)
            {
                printf("\nTu signo zodiacal es Cancer");
                printf("\nCancer: 21 de Junio - 22 de Julio");
            }
            else{
                printf("\nTu signo zodiacal es Leo");
                printf("\nLeo: 23 de Julio - 22 de Agosto");
            }
        }
        else{
            printf("\nERROR: el dia no existe");
        }
        break;

        case 8://--------------------AGOSTO----------------------
        printf("\nAgosto");
        if (dia <= 31)
        {
            if (dia <= 22)
            {
                printf("\nTu signo zodiacal es Leo");
                printf("\nLeo: 23 de Julio - 22 de Agosto");
            }
            else{
                printf("\nTu signo zodiacal es Virgo");
                printf("\nVirgo: 23 de Agosto - 22 de septiembre");
            }
        }
        else{
            printf("\nERROR: el dia no existe");
        }
        break;

        case 9://---------------------------SEPTIEMBRE---------------------
        printf("\nSeptiembre");
        if (dia <= 30)
        {
            if (dia <= 22)
            {
                printf("\nTu signo zodiacal es Virgo");
                printf("\nVirgo: 23 de Agosto - 22 de septiembre");
            }
            else{
                printf("\nTu signo zodiacal es Libra");
                printf("\nLibra: 23 de Septiembre - 22 de Octubre");
            }
        }
        else{
            printf("\nERROR: el dia no existe");
        }
        break;

        case 10://-----------------OCTUBRE----------------------
        printf("\nOctubre");
        if (dia <= 31)
        {
            if(dia <= 22)
            {
                printf("\nTu signo zodiacal es Libra");
                printf("\nLibra: 23 de Septiembre - 22 de Octubre");
            }
            else{
                printf("\nTu signo zodiacal es Escorpio");
                printf("\nEscorpio: 23 de Octubre - 21 de Noviembre");
            }
        }
        else{
            printf("\nERROR: el dia no existe");
        }
        break;

        case 11://-----------------------NOVIEMBRE---------------------
        printf("\nNoviembre");
        if (dia <= 30)
        {
            if (dia <= 21)
            {
                printf("\nTu signo zodiacal es Escorpio");
                printf("\nEscorpio: 23 de Octubre - 21 de Noviembre");
            }
            else{
                printf("\nTu signo zodiacal es Sagitario");
                printf("\nSagitario: 22 de Noviembre - 21 de Diciembre");
            }
        }
        else{
            printf("\nERROR: el dia no existe");
        }
        break;

        case 12://---------------------DICIEMBRE----------------------
        printf("\nDiciembre");
        if (dia <= 31   )
        {
            if (dia <= 21)
            {
                printf("\nTu signo zodiacal es Sagitario");
                printf("\nSagitario: 22 de Noviembre - 21 de Diciembre");
            }
            else{
                printf("\nTu signo zodiacal es Capricornio");
                printf("\nCapricornio: 22 de Diciembre - 19 de Enero");
            }
        }
        break;

        default:
        printf("ERROR: El mes no existe");
    }

    printf("\n ");
    system("PAUSE");
    system("cls");

    menu();
}