// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 15 de septiembre del 2023
// Actividad 6
// PROGRAMA QUE MANDE A LLAMAR 1.- FIBONACCI 2.- FACTORIAL DE UN NUMERO 3.- DIGITOS DE UN NUMERO

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// - - - MENU - - -
void menu_principal();
// - - - FIBONACCI - - -
void menu_fibo();
void fibo_for();
void fibo_do();
void fibo_while();
// - - - FACTORIAL - - -
void menu_fact();
void fact_for();
void fact_do();
void fact_while();
// - - - DIGITOS - - -
void menu_digit();
void digit_for();
void digit_do();
void digit_while();

// - - - MAIN - - -
int main()
{
    menu_principal();

    return 0;
}
// - - - - - - - -  MENU - - - - - - - - -
void menu_principal()
{
    int op1;

    char cadena[4];
    do{
        system("cls");
        printf("seleccione un ejercicio:");
        printf("\n1.- FIBONACCI");
        printf("\n2.- FACTORIAL");
        printf("\n3.- DIGITOS");
        printf("\n0.- SALIR");
        printf("\n");
        fflush(stdin);
        gets(cadena);
        op1 = atoi(cadena);
    } while (op1 < 0 || op1 > 3);

    if (op1!=0){
        switch (op1){
            case 1:
            menu_fibo();
            break;

            case 2:
            menu_fact();
            break;

            case 3:
            menu_digit();
            break;

            default:
            printf("ERROR INESPERADO");
        }
    }
    else{
    system("cls");
    printf("Hasta luego :)"); 
    }   
}
// - - - - - - MENU FIBONACCI - - - - - - 
void menu_fibo()
{
    int op2;

    char cadena[2];
    do{
        system("cls");
        printf("Con que ciclo desea realizar el ejercicio:");
        printf("\n1.- ciclo FOR");
        printf("\n2.- ciclo DO / WHILE");
        printf("\n3.- ciclo WHILE");
        printf("\n0.- REGRESAR");
        printf("\n");
        fflush(stdin);
        gets(cadena);
        op2 = atoi(cadena);
    } while (op2 < 0 || op2 > 3);

    if (op2 != 0){
        switch (op2){
            case 1:
            fibo_for();
            break;

            case 2:
            fibo_do();
            break;

            case 3:
            fibo_while();
            break;

            default:
            printf("ERROR INESPERADO");
        }
    }
    else{
        system("cls");
        return menu_principal();
    }
}
// - - - - - - - - - fibonacci con FOR - - - - - - - - -
void fibo_for()
{
    system("cls");
    printf("FIBONACCI CON CICLO FOR\n");
    int num, r, ant, sig, i;

    char cadena[1];
    do{
        printf("Cantidad de veces para realizar fibonacci : ");
        fflush(stdin);
        gets(cadena);
        num = atoi(cadena);
    } while (num < 1);

    system("cls");

    r = 0;
    ant = -1;
    sig = 1;

    for(i=1;i<=num;i++)
    {
        r = ant + sig;
        ant = sig;
        sig = r;
        printf("\n%i .- %i", i, r);
    }

    printf("\n");
    system ("pause");
    system ("cls");
    return menu_fibo();
}
// - - - - - - - - - fibonacci con do while - - - - - - - - - - -
void fibo_do()
{
    system("cls");
    printf("FIBONACCI CON CICLO DO / WHILE\n");
    int num, r, ant, sig, i;

    char cadena[1];
    do{
        printf("Cantidad de veces para realizar fibonacci : ");
        fflush(stdin);
        gets(cadena);
        num = atoi(cadena);
    } while (num < 1);

    system("cls");

    r = 0;
    ant = -1;
    sig = 1;
    i=1;

    do{
        r = ant + sig;
        ant = sig;
        sig = r;
        printf("\n%i .- %i", i, r);
        i+=1;
    } while (i <= num);

    printf("\n");
    system ("pause");
    system ("cls");
    return menu_fibo();
}
// - - - - - - - - fibonacci con WHILE - - - - - - - - - - 
void fibo_while()
{
    system("cls");
    printf("FIBONACCI CON CICLO WHILE\n");
    int num, r, ant, sig, i;

    char cadena[1];
    do{
        printf("Cantidad de veces para realizar fibonacci : ");
        fflush(stdin);
        gets(cadena);
        num = atoi(cadena);
    } while (num < 1);

    system("cls");

    r = 0;
    ant = -1;
    sig = 1;
    i=1;

    while (i<=num)
    {
        r = ant + sig;
        ant = sig;
        sig = r;
        printf("\n%i .- %i", i, r);
        i+=1;
    } 

    printf("\n");
    system ("pause");
    system ("cls");
    return menu_fibo();
}
// - - - - - - - - - MENU FACTORIAL - - - - - - - - - - - -
void menu_fact()
{
    int op2;

    char cadena[2];
    do{
        system("cls");
        printf("Con que ciclo desea realizar el ejercicio:");
        printf("\n1.- ciclo FOR");
        printf("\n2.- ciclo DO / WHILE");
        printf("\n3.- ciclo WHILE");
        printf("\n0.- REGRESAR");
        printf("\n");
        fflush(stdin);
        gets(cadena);
        op2 = atoi(cadena);
    } while (op2 < 0 || op2 > 3);

    if (op2 != 0){
        switch (op2){
            case 1:
            fact_for();
            break;

            case 2:
            fact_do();
            break;

            case 3:
            fact_while();
            break;

            default:
            printf("ERROR INESPERADO");
        }
    }
    else{
        system("cls");
        return menu_principal();
    }
}
// - - - - - - - - - Factorial con FOR - - - - - - - - -
void fact_for()
{
    system("cls");
    printf("FACTORIAL CON CICLO FOR\n");
    int num, num2 ,fact, i;

    char cadena[1];
    do{
        printf("Ingrese un numero para obtener su facotiral : ");
        fflush(stdin);
        gets(cadena);
        num = atoi(cadena);
    } while (num < 1);

    system("cls");
    printf("Factorial de %d", num);

    num2 = num;

    for(i=num-1;i>0;i--)
    {
        fact = num2 * i;
        printf("\n%d X %d = %d", i, num2, fact);
        num2 = fact;
    }

    printf("\n");
    system ("pause");
    system ("cls");
    return menu_fact();
}
// - - - - - - - - FACTORIAL CON DO / WHILE - - - - - - - - - -
void fact_do()
{
    system("cls");
    printf("FACTORIAL CON CICLO DO / WHILE\n");
    int num, num2 ,fact, i;

    char cadena[1];
    do{
        printf("Ingrese un numero para obtener su facotiral : ");
        fflush(stdin);
        gets(cadena);
        num = atoi(cadena);
    } while (num < 1);

    system("cls");
    printf("Factorial de %d", num);

    i = num-1;
    num2 = num;

    do
    {
        fact = num2 * i;
        printf("\n%d X %d = %d", i, num2, fact);
        num2 = fact;
        i-=1;
    }while(i>0);

    printf("\n");
    system ("pause");
    system ("cls");
    return menu_fact();
}
// - - - - - - - FACTORIAL CON WHILE - - - - - - - - - - 
void fact_while()
{
    system("cls");
    printf("FACTORIAL CON CICLO WHILE\n");
    int num, num2 ,fact, i;

    char cadena[1];
    do{
        printf("Ingrese un numero para obtener su facotiral : ");
        fflush(stdin);
        gets(cadena);
        num = atoi(cadena);
    } while (num < 1);

    system("cls");
    printf("Factorial de %d", num);

    i = num-1;
    num2 = num;

    while(i>0)
    {
        fact = num2 * i;
        printf("\n%d X %d = %d", i, num2, fact);
        num2 = fact;
        i-=1;
    }

    printf("\n");
    system ("pause");
    system ("cls");
    return menu_fact();
}
// - - - - - - - - - MENU DIGITOS - - - - - - - - - - - -
void menu_digit()
{
    int op2;

    char cadena[2];
    do{
        system("cls");
        printf("Con que ciclo desea realizar el ejercicio:");
        printf("\n1.- ciclo FOR");
        printf("\n2.- ciclo DO / WHILE");
        printf("\n3.- ciclo WHILE");
        printf("\n0.- REGRESAR");
        printf("\n");
        fflush(stdin);
        gets(cadena);
        op2 = atoi(cadena);
    } while (op2 < 0 || op2 > 3);


    if (op2 != 0){
        switch (op2){
            case 1:
            digit_for();
            break;

            case 2:
            digit_do();
            break;

            case 3:
            digit_while();
            break;

            default:
            printf("ERROR INESPERADO");
        }
    }
    else{
        system("cls");
        return menu_principal();
    }
}
// - - - - - - - - - DIGITOS CON FOR - - - - - - - - - -
void digit_for()
{
    system("cls");
    printf("DIGITOS CON CICLO FOR\n");
    int num, x, dig;

    char cadena[1];
    do{
        printf("Ingrese numero : ");
        fflush(stdin);
        gets(cadena);
        num = atoi(cadena);
    } while (num < 1);

    x=1;

    for(dig=0; x<num ; dig++)
    {
        x = x *10;
    }

    printf("\nEl numero %d tiene %d digitos", num, dig);

    printf("\n");
    system ("pause");
    system ("cls");
    return menu_digit();
}
// - - - - - - - - - - DIGITOS CON DO / WHILE - - - - - - - - - -
void digit_do()
{
    system("cls");
    printf("DIGITOS CON CICLO DO / WHILE\n");
    int num, x, dig;

    char cadena[1];
    do{
        printf("Ingrese numero : ");
        fflush(stdin);
        gets(cadena);
        num = atoi(cadena);
    } while (num < 1);

    x=1;
    dig=0;

    do
    {
        x = x *10;
        dig+=1;
    }while(x<num);

    printf("\nEl numero %d tiene %d digitos", num, dig);

    printf("\n");
    system ("pause");
    system ("cls");
    return menu_digit();
}
// - - - - - - - -DIGITOS CON WHILE - - - - - - - - -
void digit_while()
{
    system("cls");
    printf("DIGITOS CON CICLO WHILE\n");
    int num, x, dig;

    char cadena[1];
    do{
        printf("Ingrese numero : ");
        fflush(stdin);
        gets(cadena);
        num = atoi(cadena);
    } while (num < 1);

    x=1;
    dig=0;

    while(x<num)
    {
        x = x *10;
        dig+=1;
    }

    printf("\nEl numero %d tiene %d digitos", num, dig);

    printf("\n");
    system ("pause");
    system ("cls");
    return menu_digit();
}