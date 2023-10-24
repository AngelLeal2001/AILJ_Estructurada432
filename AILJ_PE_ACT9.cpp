#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 15

void validar();
void msge();
void menu();
void llenar_vect(int vect1[], int M);

int main()
{
    menu();

    return 0;
}
///////////////////////////////////MENSAJE
void msge()
{
    printf("--- MENU --- \n");
    printf("\n1.- LLENAR VECTOR  ");
    printf("\n2.- LLENAR MATRIZ");
    printf("\n3.- IMPRIMIR VECTOR");
    printf("\n4.- IMPRIMIR MATRIZ");
    printf("\n5.- ORDENAR VECTOR");
    printf("\n6.- BUSCAR VALOR EN VECTOR");
    printf("\n0.- SALIR");
    printf("\nElige una opcion : ");
}
//////////////////////////////////////////// MENU
/*void validar()
{
    int op;
    char opx [30];
    do{
        msge();
        fflush(stdin);
        gets(opx);
        op = atoi(opx);
    }while(op < 0 || op > 6);
}*/
///////////////////////////////OPCION
void menu(int vect1[], int M)
{
    int op;
    char opx [30];
    do{
        msge();
        fflush(stdin);
        gets(opx);
        op = atoi(opx);
    }while(op < 0 || op > 6);

    switch(op)
    {
        case 1:
        system("cls");
        printf("LLENAR VECTOR");
        llenar_vect(vect1,M);
        break;

        case 2:
        system("cls");
        printf("LLENAR MATRIZ");
        break;

        case 3:
        system("cls");
        printf("IMPRIMIR VECTOR");
        break;

        case 4:
        system("cls");
        printf("IMPRIMIR MATRIZ");
        break;

        case 5:
        system("cls");
        printf("ORDENAR VECTOR");
        break;

        case 6:
        system("cls");
        printf("BUSCAR VALOR EN EL VECTOR");
        break;

        default:
        system("cls");
        printf("que tenga un buen dia :)");
    }
}
///////////////////////// llenar vector
void llenar_vect(int vect1[], int M)
{
    int num, i;

    for(i = 0 ; i < M ; i++)
    {
        char numx [30];
        do{
            printf("dame un numero : ");
            fflush(stdin);
            gets(numx);
            num = atoi(numx);
        }while(num < 100 || num > 200);

        vect1[i] = num;
    }
}