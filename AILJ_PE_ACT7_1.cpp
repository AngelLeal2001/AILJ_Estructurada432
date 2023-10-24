#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void salida1(void);
void salida2(void);
void salida3(void);
void salida4(void);
void salida5(void);
void salida6(void);

int main()
{
    salida1();

    return 0;
}

void salida1()
{
    char cadena[20];
    printf("Escribe una palabra : ");
    fflush(stdin);
    gets(cadena);

    printf("\n");
    puts(cadena);

    system("pause");
    system("cls");

    salida2();
}

void salida2()
{
    int j, i, tam;
    char cadena[20], cadena2[20];
    printf("Escribe una palabra : ");
    fflush(stdin);
    gets(cadena);

    i=0;
    tam=0;

    while(cadena[i] != '\0')
    {
        i++;
        tam++;
    }

    tam--;
    printf("\n");

    j=0;
    while(cadena[j] != '\0')
    {
        cadena2[j] = cadena[tam];
        tam--;
        j++;
    }
    cadena2[j] = '\0';

    puts(cadena2);

    system("pause");
    system("cls");
    salida3();
}

void salida3()
{
    int i;
    char cadena[20];
    printf("Escribe una palabra : ");
    fflush(stdin);
    gets(cadena);

    i=0;
    while (cadena[i] != '\0')
    {
        char x = cadena[i];
        printf("\n%c", x);

        i+=1;
    }
    printf("\n");
    system("pause");
    system("cls");
    salida4();
}

void salida4()
{
    int i, tam;
    char cadena[20];
    printf("Escribe una palabra : ");
    fflush(stdin);
    gets(cadena);

    printf("\n");

    i=0;
    tam=0;

    while(cadena[i] != '\0')
    {
        i++;
        tam++;
    }

    i=0;
    while(tam>=0)
    {
        char xx = cadena[tam-1];
        printf("\n%c", xx);
        tam--;
    }

    printf("\n");
    system("pause");
    system("cls");
}