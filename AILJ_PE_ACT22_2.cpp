// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 8 de septiembre del 2023
// Actividad 2.2 (optimizacion de codigo)
// juego del CHINCHAMPU (Piedra, Papel, Tijera) para 1 jugador y la computadora,  (usar condición anidada) 

#include <stdio.h>
#include <stdlib.h>

void menu(void);
void juego(void);

//-----------------MAIN------------------
int main()
{
    menu();

    return 0;
}
//-----------------MENU------------------
void menu()
{
    int op;
    printf("Pulsa cualquier numero para avanzar\n");
    printf("Pulsa 0 para salir\n");
    scanf("%i",&op);
    system("CLS");

    if (op != 0)
    {
        juego();
    }
    else{
    system ("cls");
    printf("Que tenga un buen dia! :)");    
    }
}
//------------------------JUEGO------------------------------
void juego(void)
{
    int jug1, jug2;

    printf("1.- Piedra\n");
    printf("2.- Papel\n");
    printf("3.- Tijeras\n");
    printf("Eliga una opcion: \n");
    scanf("%i", &jug1);

    jug2 = rand()%3;

    if (jug1 == 1)
    {
        if (jug2 == 1)
        {
            printf("\nEMPATE");
            printf("\nLos 2 eligieron piedra");
        }
        else
        {
            if (jug2 == 2)
            {
                printf("\nPERDISTE");
                printf("\nPapel gana a Piedra");
            }
            else
            {
                if (jug2 == 3)
                {
                    printf("\nGANASTE");
                    printf("\nPiedra gana a Tijeras");
                }
            }
        }   
    }

    if (jug1 == 2)
    {
        if (jug2 == 1)
        {
            printf("\nGANASTE");
            printf("\nPapel gana a piedra");
        }
        else
        {
            if (jug2 == 2)
            {
                printf("\nEMPATE");
                printf("\nLos 2 eligieron papel");
            }
            else
            {
                if (jug2 == 3)
                {
                    printf("\nPERDISTE");
                    printf("\nTijeras gana a papel");
                }
            }
        }
    }

    if (jug1 == 3)
    {
        if (jug2 == 1)
        {
            printf("\nPERDISTE");
            printf("\nPiedra gana a tijeras");
        }
        else
        {
            if (jug2 == 2)
            {
                printf("\nGANASTE");
                printf("\nTijeras gana a papel");
            }
            else
            {
                if (jug2 == 3)
                {
                    printf("\nEMPATE");
                    printf("\nLos 2 eligieron tijeras");
                }
            }
        }            
    }

    printf("\n");
    system("PAUSE");
    system("cls");

    menu();
}