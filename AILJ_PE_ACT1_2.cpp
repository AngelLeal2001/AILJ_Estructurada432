#include <stdio.h>

int main()
{
    int lado1, lado2, area, alambre;
    float precio;
    printf("dame la primera medida del terreno: ");
    scanf("%i", &lado1);

    printf("dame la segunda medida del terreno: ");
    scanf("%i", &lado2);

    area = lado1 * lado2;

    precio = area * 35.40;
    
    printf("\n Cantidad a pagar para sembrar el pasto: $%.2f", precio);

    alambre = (lado1*2) + (lado2 * 2);

    printf("\n Cantidad de alambre para la cerca: %i", alambre);

    return 0;
}