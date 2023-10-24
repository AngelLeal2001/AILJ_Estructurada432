// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 4 de septiembre del 2023
// Actividad 4.5
// 5.- Programa que muestre el Total de una llamada telefónica donde se pide como datos de entrada los minutos y el tipo de llamada, se cobra de la siguiente manera:
// 1.- Llamada Local $3.00 sin límite de tiempo
// 2.- Llamada Nacional $7.00 por los 3 primeros minutos y $2.00 minuto adicional
// 3.- Llamada Internacional $9.00 por los 2 primeros minutos y $4.00 minuto adicional
// Desplegar, Subtotal,Iva (16%) y Total.

#include<stdio.h>

int main()
{

    int min, tipo, subtotal;
    float iva, total;

    printf("1.- Local\n");
    printf("2.- Nacional\n");
    printf("3.- Internacional\n");

    printf("Hola, cual es su tipo de llamada: \n");
    scanf("%i", &tipo);

    switch(tipo)
    {
        case 1:
        printf("\n ---> llamada Local\n");

        printf("Minutos de llamada: \n");
        scanf("%i", &min);

        iva = 3 * .16;
        total = 3 + iva;
        printf("\nSubtotal: $3.00");
        printf("\nIVA: %f", iva);
        printf("\nTOTAL: %f", total);
        break;

        case 2:
        printf(" ---> llamada Nacional\n");

        printf("Minutos de llamada: \n");
        scanf("%i", &min);

        if (min <= 3)
        {
            iva = 7 * .16;
            total = 7 + iva;
            printf("\nSubtotal: $7.00");
            printf("\nIVA: %f", iva);
            printf("\nTOTAL: %f", total);
        }
        else
        {
            subtotal = 7 + ((min - 3) * 2);
            iva = subtotal * .16;
            total = subtotal + iva;
            printf("\nSubtotal: %i", subtotal);
            printf("\nIVA: %f", iva);
            printf("\nTOTAL: %f", total);
        }

        break;

        case 3:
        printf(" ---> llamada Internacional\n");

        printf("Minutos de llamada: \n");
        scanf("%i", &min);
        
        if (min <= 2)
        {
            iva = 9 * .16;
            total = 9 + iva;
            printf("\nSubtotal: $9.00");
            printf("\nIVA: %f", iva);
            printf("\nTOTAL: %f", total);
        }
        else
        {
            subtotal = 9 + ((min - 2) * 4);
            iva = subtotal * .16;
            total = subtotal + iva;
            printf("\nSubtotal: %i", subtotal);
            printf("\nIVA: %f", iva);
            printf("\nTOTAL: %f", total);
        }

        break;

        default:
        printf("Error");
    }

    return 0;
}