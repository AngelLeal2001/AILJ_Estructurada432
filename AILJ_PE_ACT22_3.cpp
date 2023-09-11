// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 8 de septiembre del 2023
// Actividad 2.3 (optimizacion de codigo)
// juego del CHINCHAMPU (Piedra, Papel, Tijera) para 1 jugador y la computadora,  (usar seleccion multiple)

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

    jug2 = rand()%3 + 1;

    switch(jug1)
    {
        case 1:
        switch(jug2)
        {
            case 1:
            printf("\nEMPATE");
            printf("\nLos 2 eligieron piedra");
            break;

            case 2:
            printf("\nPERDISTE");
            printf("\nPapel gana a piedra");
            break;

            case 3:
            printf("\nGANASTE");
            printf("\nPiedra gana a tijeras");
            break;

            default:
            printf("\nError inesperado");
        }
        break;

        case 2:
        switch(jug2)
        {
            case 1:
            printf("\nGANASTE");
            printf("\nPapel gana a piedra");
            break;

            case 2:
            printf("\nEMPATE");
            printf("\nLos 2 eligieron papel");
            break;

            case 3:
            printf("\nPERDISTE");
            printf("\nTijeras gana a papel");
            break;

            default:
            printf("\nError inesperado");
        }
        break;

        case 3:
        switch(jug2)
        {
            case 1:
            printf("\nPERDISTE");
            printf("\nPiedra gana a tijeras");
            break;

            case 2:
            printf("\nGANASTE");
            printf("\nTijeras gana a papel");
            break;

            case 3:
            printf("\nEMPATE");
            printf("\nLos 2 eligieron tijeras");
            break;

            default:
            printf("\nError inesperado");
        }
        break;

        default:
        printf("\nDel 1 al 3 porfavor");
        system("PAUSE");
        system("cls");
        juego();

    }

    printf("\n");
    system("PAUSE");
    system("cls");

    menu();

}