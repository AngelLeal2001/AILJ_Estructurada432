// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 4 de septiembre del 2023
// Actividad 4.6
// Programa que sirva para calcular el Total a pagar por consumo de agua, donde el dato de entrada son los M3 de agua consumidos, Tomar en cuenta que se cobra escalonada de la Siguiente manera:
// 1.- 0 al 4 M3 $50 x facturación sin importar cuánto consumió en este rango
//2.- 5 a 15 M3 $8.00 x M3
// 3.- 16 a 50 M3 $10.00 x M3
// 4.- 51 M3 en adelante $11.00 x M3

#include<stdio.h>

int main()
{

    int m3, condicion, subtotal;
    float total, iva;

    printf("M3 de agua consumidos: ");
    scanf("%i", &m3);

    if (m3 <= 4)
    {
        condicion = 1;
    }
    else
    {
        if (m3 <= 15)
        {
            condicion = 2;
        }

        else
        {
            if (m3 <= 50)
            {
                condicion = 3;
            }
            else
            {
                condicion = 4;
            }
        }
    }

    switch (condicion)
    {
        case 1:
        if (m3 == 0)
        {
            printf("\nSubtotal: $0");
            printf("\nIVA: $0");
            printf("\nTOTAL: $0");  
        }
        else
        {
            iva = 50 * .16;
            total = 50 + iva;
            printf("\nSubtotal: $50");
            printf("\nIVA: $%f", iva);
            printf("\nTOTAL: $%f", total);
        }
        break;

        case 2:
        subtotal = 50 + ((m3 - 4) * 8);
        iva = subtotal * .16;
        total = subtotal + iva;
        printf("\nSubtotal: $%i", subtotal);
        printf("\nIVA: $%f", iva);
        printf("\nTOTAL: $%f", total);
        break;

        case 3:
        subtotal = 50 + 88 + ((m3 - 15) * 10);
        iva = subtotal * .16;
        total = subtotal + iva;
        printf("\nSubtotal: $%i", subtotal);
        printf("\nIVA: $%f", iva);
        printf("\nTOTAL: $%f", total);
        break;

        case 4:
        subtotal = 50 + 88 + 250 + ((m3 - 50) * 11);
        iva = subtotal * .16;
        total = subtotal + iva;
        printf("\nSubtotal: $%i", subtotal);
        printf("\nIVA: $%f", iva);
        printf("\nTOTAL: $%f", total);
        break;

        default:
        printf("Error");

    }

    return 0;
}