#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu_principal();
int valid_num();

llenar_vect_man();
llenar_vect_ran();
llenar_vect_3();
imprimir_vect();
llenar_mat();
imprimir_mat();


int main()
{
    menu_principal();

    return 0;
}
//-------------- menu principal --------------------
void menu_principal()
{
    int op, vect1[M], vect2[M], vect3[M*2];

    char xop[30];

    do{
        printf("--- MENU ---\n");
        printf("1.- llenar vector 1 manualmente\n");
        printf("2.- llenar vector 2 aleatoriamente\n");
        printf("3.- llenar vector 3 (vect1 + vect2)\n");
        printf("4.- imprimir vector 3\n");
        printf("5.- llenar matriz 4 x 4\n");
        printf("6.- imprimir matriz\n");
        printf("0.- salir\n");
        printf("escoge una opcion : ");
        
        fflush(stdin);
        gets(xop);
        op = atoi(xop);
    } while (op < 0 || op > 5);

    if (op != 0)
    {
        switch(op)
        {
            case 1:
            llenar_vect_man(int vect1,int M,int ri=30,int rf=70);
            break;
        }
    }
    else{
        system("cls");
        printf("hasta luego");
    }
}
//-------------------- VALIDAR NUMERO ---------------------------
int valid_num(int ri, int rf, char msge[])
{
    int num;
    char xnum[30];

    do{
        puts(msge);
        fflush(stdin);
        gets(xnum);
        num = atoi(xnum);
    }while (num < ri || num > rf)

    return num;
}
//------------llenar manualmente -------------------------
void llenar_vec_man(int vect[], int M = 10,int ri,int rf)
{
    int i;
    for( i=0 ; i<M ; i++ )
    {
        vect[i]= valid_num(ri, rf,"dame un numero");
    }
}