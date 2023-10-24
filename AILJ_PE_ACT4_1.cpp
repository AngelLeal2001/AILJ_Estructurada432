// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 4 de septiembre del 2023
// Actividad 4.1
// usar un menú para realizar las 4 operaciones básicas, donde introducen 2 números enteros y realizará la operacion indicada.

#include <stdio.h>

int main()
{
    int num1, num2, op;
    float result;

    printf("Hola, que operacion desea realizar?\n");
    printf("1.- Suma\n");
    printf("2.- Resta\n");
    printf("3.- Multiplicacion\n");
    printf("4.- Division\n");
    printf("\n Eliga una opcion: ");
    scanf("%i", &op);

    switch(op)
    {
        case 1:
        printf("\nDame el primero numero: ");
        scanf("%i", &num1);

        printf("\nDame el segundo numero: ");
        scanf("%i", &num2);

        result = num1 + num2;
        printf("\nLa suma se los 2 numeros es: %.1f", result);
        break;

        case 2:
        printf("\nDame el primero numero: ");
        scanf("%i", &num1);

        printf("\nDame el segundo numero: ");
        scanf("%i", &num2);

        result = num1 - num2;
        printf("\nLa resta de los 2 numeros es: %.1f", result);
        break;

        case 3:
        printf("\nDame el primero numero: ");
        scanf("%i", &num1);

        printf("\nDame el segundo numero: ");
        scanf("%i", &num2);

        result = num1 * num2;
        printf("\nLa multiplicacion los 2 numeros es: %.1f", result);
        break;

        case 4:
        printf("\nDame el primero numero: ");
        scanf("%i", &num1);

        printf("\nDame el segundo numero: ");
        scanf("%i", &num2);

        result = num1 / num2;
        printf("\nLa division de los 2 numeros es: %f", result);
        break;

        default:
        printf("\nLe pido amablemente que lea bien, del 1 al 4 por favor :)");
    }

    return 0;
}