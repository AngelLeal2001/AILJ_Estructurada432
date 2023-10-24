// ACTIVIDAD 1 
// ANGEL IGNACIO LEAL JUAREZ


#include <stdio.h>
#include <math.h>

int main()
{
    int r, h;
    float area, pi, vol;

    printf("Dame el radio de la base: ");
    scanf("%i", &r);

    printf("Dame la altura del cilindro: ");
    scanf("%i", &h);

    pi = 3.1416;

    area = pi * (r * r);

    vol = area * h;

    printf("\n El volumen del cilindro es: %.2f", vol);

    return 0;
}