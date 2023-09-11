// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 8 de septiembre del 2023
// Actividad 2.6 (optimizacion de codigo)
// leer 3 números y desplegar en forma ascendente (usar AND o OR)

#include <stdio.h>
#include <stdlib.h>

void menu(void);
void ascendente(void);

int main()
{
    menu();

    return 0;
}
// ------------------------- MENU ------------------------------
void menu()
{
    int op;
    printf("Pulsa cualquier numero para avanzar\n");
    printf("Pulsa 0 para salir\n");
    scanf("%i",&op);
    system("CLS");

    if (op != 0)
    {
        ascendente();
    }
    else{
    system ("cls");
    printf("Que tenga un buen dia! :)");    
    }
}
// -------------------------------- NUMERO MAYOR ----------------------------------
void ascendente(void)
{
    int num1, num2, num3;

    printf("Dame el primer numero: \n");
    scanf("%i", &num1);

    printf("Dame el segundo numero: \n");
    scanf("%i", &num2);

    printf("Dame el tercer numero: \n");
    scanf("%i", &num3);

    if(num1 < num2 && num1 < num3)
    {
        if (num2 < num3)
        {
            printf("\n num1 : %i", num1);
            printf("\n num2 : %i", num2);
            printf("\n num3 : %i", num3);
        }
        else{
            printf("\n num1 : %i", num1);
            printf("\n num3 : %i", num3);
            printf("\n num2 : %i", num2);
        }
    }

    if (num2 < num1 && num2 < num3)
    {
        if (num1 < num3)
        {
            printf("\n num2 : %i", num2);
            printf("\n num1 : %i", num1);
            printf("\n num3 : %i", num3);
        }
        else{
            printf("\n num2 : %i", num2);
            printf("\n num3 : %i", num3);
            printf("\n num1 : %i", num1);
        }
    }
    
    if (num3 < num1 && num3 < num2)
    {
        if (num1 < num2)
        {
            printf("\n num3 : %i", num3);
            printf("\n num1 : %i", num1);
            printf("\n num2 : %i", num2);
        }
        else{
            printf("\n num3 : %i", num3);
            printf("\n num2 : %i", num2);
            printf("\n num1 : %i", num1);
        }
    }

    printf("\n");
    system("PAUSE");
    system("cls");

    menu();

}