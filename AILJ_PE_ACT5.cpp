#include <stdio.h>
#include <stdlib.h>

int menu();
void enteros (void);
void parimpar (void);
void mayormenor (void);
void tabla (void);
// ----------------- MAIN ----------------------
int main()
{
    menu();

    return 0;
}
//------------------- MENU ----------------------
int menu()
{
    int op;
    printf(" - - MENU - - \n");
    printf("1.- Numeros enteros positivos en roden descendente\n");
    printf("2.- Generar numeros del 0 al 200 y saber si son pares e impares\n");
    printf("3.- Generar numeros de -200 a 100 y mostrar el numero mayor y menor\n");
    printf("4.- Tabla de multiplicar de un numero\n");
    printf("seleccione 0 para salir\n");
    scanf("%i", &op);


    while (op != 0)
    {
        switch (op)
        {
            case 1:
            system("cls");
            enteros();
            break;

            case 2:
            system("cls");
            parimpar();
            break;

            case 3:
            system("cls");
            mayormenor();
            break;

            case 4:
            system("cls");
            tabla();
            break;

            default:
            break;
        }
    }

    system("cls");
    printf("Que tenga buen dia :)");
}
//--------------------- ENTEROS POSITIVOS -------------------------
void enteros (void)
{
int n, i, nmenor;
    i = 1;
    
    printf("Dame el valor de n :");
    scanf("%i", &n);

    nmenor = n;

    while (i < n)
    {
        printf("%i\n", --nmenor);
        i+=1;
    }

    printf("\n");
    system ("pause");
    system ("cls");

}
// ----------------- PAR O IMPAR ---------------------
void parimpar(void)
{
    int N, num, par, impar, sumapar, sumaimpar, i;
    N = 40;
    par = 0;
    impar = 0;
    sumapar = 0;
    sumaimpar = 0;
    i=0;

    while (i < N)
    {
        num  = rand()%201;

        if (num % 2 == 0)
        {
            printf("%i", num);
            printf(" --> PAR\n");
            par = par + 1;
            sumapar = sumapar + num;
        }
        else
        {
            printf("%i", num);
            printf(" --> IMPAR\n");
            impar = impar + 1;
            sumaimpar = sumaimpar + num;
        }

        i+=1;
    }

    printf("\nNumeros pares : %i", par);
    printf("\nSuma de los numeros pares : %i", sumapar);

    printf("\nNumeros impares : %i", impar);
    printf("\nSuma de los numeros impares : %i", sumaimpar);

    printf("\n");
    system ("pause");
    system ("cls");
}
// ------------------ MAYOR Y MENOR -------------------------------
void mayormenor (void)
{
    int N, num, nmenor, nmayor, i;

    N = 35;
    nmayor = -200;
    nmenor = 100;
    i=0;

    while (i < N)
    {
        num  = rand()%301 - 200;
        printf("%i\n", num);

        if (num > nmayor)
        {
            nmayor = num;
        }

        if (num < nmenor)
        {
            nmenor = num;
        }
        i+=1;
    }

    printf("\nNumero menor : %i", nmenor);
    printf("\nNumero mayor : %i", nmayor);

    printf("\n");
    system ("pause");
    system ("cls");
}
// --------------------- TABLA MULTIPLICAR ------------------------
void tabla (void)
{
    int n, i, mult;
    mult = 1;
    i = 0;

    printf("Dame el valor de n (del 1 al 20): ");
    scanf("%i", &n);

    if(n<1 || n>20)
    {
        printf("Opcion no valida >:(\n");
        return tabla();
    }
    else
    {
        printf("Tabla del %i", n);
        printf("\n");

        while (i<10)
        {
            printf("%i", n);
            printf(" X %i", mult);
            printf(" = ");

            printf("%i\n", n*mult);

            mult+=1;
            i+=1;
        }
    }

    printf("\n");
    system ("pause");
    system ("cls");
}