// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 4 de septiembre del 2023
// Actividad 4.2
// usar un menú para realizar conversiones de unidades de medida, donde el usuario selecciona una opción y realizará la opción.

#include<stdio.h>

int main()
{
    int op;
    float medida, result;

    printf("Hola, que operacion desea realizar?\n");
    printf("1.- cm a pulgadas\n");
    printf("2.- cm a pies\n");
    printf("3.- Km a millas\n");
    printf("4.- Pulgadas a cm\n");
    printf("5.- pies a cm\n");
    printf("6.- millas a Km\n");

    printf("\n Eliga una opcion: ");
    scanf("%i", &op);

    switch(op)
    {
        case 1:
        printf("\nDame la medida en centimetros: ");
        scanf("%f", &medida);

        result = medida / 2.54;

        printf("\nMedida en Cm a in : %f", result);
        break;


        case 2:
        printf("\nDame la medida en centimetros: ");
        scanf("%f", &medida);

        result = medida / 30.48;

        printf("\nMedida de Cm a Ft : %f", result);
        break;


        case 3:
        printf("\nDame la medida en Kilometros: ");
        scanf("%f", &medida);

        result = medida / 1.609;

        printf("\nMedida de Km a Millas : %f", result);
        break;


        case 4:
        printf("\nDame la medida en pulgadas: ");
        scanf("%f", &medida);

        result = medida * 2.54;

        printf("\nMedida de pulgadas a Cm : %f", result);
        break;


        case 5:
        printf("\nDame la medida en pies: ");
        scanf("%f", &medida);

        result = medida * 30.48;

        printf("\nMedida de pies a Cm : %f", result);
        break;


        case 6:
        printf("\nDame la medida en millas: ");
        scanf("%f", &medida);

        result = medida * 1.609;

        printf("\nmedida de millas a Km : %f", result);
        break;

        default:
        printf("\nLe pido amablemente que lea bien, del 1 al 6 por favor :)");
    }

    return 0;
}