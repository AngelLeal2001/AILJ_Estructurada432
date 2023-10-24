// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 15 de septiembre del 2023
// Actividad 6
// PROGRAMA QUE MANDE A LLAMAR EJERCICIOS PARTE 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu_principal();
// ----menu-----
void ex_nivelacion();
void tabla();
void num_rango();
void turistas();
void promedio();

// - - - - - - - - - MAIN - - - - - - - - -

int main()
{
    menu_principal();

    return 0;
}

// ----------------- MENU -------------------------

void menu_principal()
{
    int op1;
    
    char cadena[1];
    do{
        system("cls");
        printf("------- MENU -------\n");
        printf("1.- Derecho Ex. nivelacion\n");
        printf("2.- Tabla de multiplicar\n");
        printf("3.- Numeros dentro de un rango\n");
        printf("4.- Peso de turistas\n");
        printf("5.- Promedio final de alumno\n");
        printf("6.- Salir\n");
        printf("\n");
        fflush(stdin);
        gets(cadena);
        op1 = atoi(cadena);
    } while (op1 < 1 || op1 > 6);

    if (op1 != 0)
    {
        switch (op1)
        {
            case 1:
            ex_nivelacion();
            break;

            case 2:
            tabla();
            break;

            case 3:
            num_rango();
            break;

            case 4:
            turistas();
            break;

            case 5:
            promedio();
            break;

            case 6:
            system("cls");
            printf("Hasta luego :)");
            break;

            default:
            system("cls");
            printf("ERROR INESPERADO :O");
        }
    }
}

// -------------------------EXAMEN DE NIVELACION------------------------

void ex_nivelacion()
{
    int cal, N, i, sinder;

    N = 40;
    i = 1;
    sinder=0;

    while(i<=N)
    {
        char cadena[40];
        do{
            system("cls");
            printf("Promedio del alumno #%d: ", i);
            printf("\n");
            fflush(stdin);
            gets(cadena);
            cal = atoi(cadena);
        } while (cal < 1 || cal > 100);

        i+=1;
        if (cal < 50)
        {
            sinder = sinder+1;
        }
    }

    printf("\nAlumnos que NO tienen derecho a examen de nivelacion : %d", sinder);

    system("pause");
    system("cls");
    return menu_principal();
}

//---------------TABLA DE MULTIPLICAR--------------------------

void tabla()
{
    int num, i, result;

    char cadena[40];
    do{
        system("cls");
        printf("ingrese un numero : ");
        printf("\n");
        fflush(stdin);
        gets(cadena);
        num = atoi(cadena);
    } while (num < 1);

    system("cls");
    printf("TABLA DEL %d\n", num);
    for(i=1; i<=10; i++)
    {
        result = num * i;
        printf("%d X %d = %d\n",num, i, result);
    }

    system("pause");
    system("cls");
    return menu_principal();
}

//----------------NUMEROS DENTRO DE UN RANGO -------------------

void num_rango()
{
    int min, max, num, i, n, suma;
    float media;

    suma=0;
    i=1;

    printf("Cantidad de numeros : ");
    scanf("%d", &n);

    printf("Rango minimo : ");
    scanf("%d", &min);

    printf("Rango maximo : ");
    scanf("%d", &max);

    while(i<=n)
    {
        char cadena[40];
        do{
            system("cls");
            printf("ingrese un numero #%d (%d - %d) : ",i , min, max);
            printf("\n");
            fflush(stdin);
            gets(cadena);
            num = atoi(cadena);
        } while (num < min || num > max);

    i+=1;
    suma = suma + num;
    }

    system("cls");
    media = suma / n;
    printf("\nSuma de los numeros dentro del rango : %d", suma),

    printf("\nMedia de los numeros dentro del rango : %f", media),

    printf("\n");
    system("pause");
    system("cls");
    return menu_principal();
}

//------------- TURISTAS-------------------------
void turistas()
{
    int gente, gentemax, peso, pesototal, pesomax;
    float promgente;

    gentemax = 10;
    pesomax = 700;
    gente = 1;
    pesototal = 0;

    while(gente < gentemax+1)
    {
    char cadena[40];
        do{
            system("cls");
            printf("Peso de la persona #%d: ", gente);
            printf("\n");
            fflush(stdin);
            gets(cadena);
            peso = atoi(cadena);
        } while (peso < 1);

    
        pesototal = pesototal + peso;

        if (pesototal >= pesomax)
        {
            if (pesototal > pesomax +(pesomax*.15))
            {
                gente-=1;
            }
            
            printf("EL PESO LLEGO AL SU LIMITE");
            printf("\ngente : %d", gente);

            printf("\npeso : %d", pesototal);

            printf("\n");
            system("pause");
            system ("cls");
            return menu_principal();
        }

        gente+=1;
    }

    printf("CANTIDAD DE PERSONAS LLEGO A SU LIMITE\n");
    printf("\ngente : %d", gente);

    printf("\npeso : %d", pesototal);

    promgente = pesototal / gente;
    printf("\nPeso promedio de la gente : %f", promgente);

    printf("\n");
    system("pause");
    system ("cls");
    return menu_principal();
}
//-------------------- PROMEDIO DE UN ALUMNO -----------------------
void promedio()
{
    int cal, i, op;

    for(i=0;i<3;i++)
    {
        char cadena[40];
        do{
            system("cls");
            printf("Calificacion del alumno : ");
            printf("\n");
            fflush(stdin);
            gets(cadena);
            cal = atoi(cadena);
        } while (cal < 1 || cal > 100);

        if (cal >= 60)
        {
            printf("\nEl alumno esta aprobado");
            
            printf("\n");
            system("pause");
            system ("cls");
            return menu_principal();
        }
        else
        {
            if (i<3)
            {
                char cadena[40];
                do{
                    system("cls");
                    printf("El alumno debera repetir\n");
                    printf("Desea darse de baja?\n");
                    printf("1.- SI\n");
                    printf("2.- NO\n");
                    fflush(stdin);
                    gets(cadena);
                    op = atoi(cadena);
                } while (op < 1 || op > 2);

                if (op == 1)
                {
                    printf("El alumno se dio de baja temporal");
                    system("pause");
                    return menu_principal();
                }
            }
        }
    }
    printf("El alumno alcanzo el limite de recursar la materia");

    printf("\n");
    system("pause");
    system ("cls");
    return menu_principal();

}