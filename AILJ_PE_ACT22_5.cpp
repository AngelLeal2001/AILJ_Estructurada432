// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 8 de septiembre del 2023
// Actividad 2.5 (optimizacion de codigo)
// leer 3 números y desplegar cuál número es el del medio (usar AND o OR)

#include <stdio.h>
#include <stdlib.h>

void menu(void);
void numeromedio(void);

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
        numeromedio();
    }
    else{
    system ("cls");
    printf("Que tenga un buen dia! :)");    
    }
}
// -------------------------------- NUMERO MEDIO ----------------------------------
void numeromedio(void)
{
    int num1, num2, num3;

    printf("Dame el primer numero: \n");
    scanf("%i", &num1);

    printf("Dame el segundo numero: \n");
    scanf("%i", &num2);

    printf("Dame el tercer numero: \n");
    scanf("%i", &num3);

    if((num1 > num2 && num3 > num1) || (num1 < num2 && num3 < num1))
    {
        printf("\nEl numero del medio es el numero 1: %i", num1);
    }

    if ((num2 > num1 && num3 > num2) || (num2 < num1 && num3 < num2))
    {
        printf("\nEl numero del medio es el numero 2 : %i", num2);
    }

    if ((num3 > num1 && num2 > num3) || (num3 < num1 && num2 < num3))
    {
        printf("\nEl numero del medio es el numro 3 : %i", num3);
    }

    printf("\n");
    system("PAUSE");
    system("cls");

    menu();

}