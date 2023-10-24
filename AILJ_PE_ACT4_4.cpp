// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 4 de septiembre del 2023
// Actividad 4.4
//4.- calcular el salario semanal donde se obtiene como dato de entrada las horas semanales trabajadas y el salario por hora.
// desplegar los datos: salarios x hora, horas trabajadas, salario normal, extra y total

#include<stdio.h>

int main()
{
    int horas, salhora, salextra, saltotal, salnormal, condicion;

    printf("Horas trabajadas en la semana: ");
    scanf("%i", &horas);

    printf("Salario por hora: ");
    scanf("%i", &salhora);

    if (horas > 40)
    {
        if (horas > 49)
        {
            condicion = 3;
        }
        else
        {
            condicion = 2;
        }
    }
    else
    {
        condicion = 1;
    }

    switch (condicion)
    {
        case 1:
        salnormal = salhora * horas;

        saltotal = salnormal;

        printf("\nsalario por hora: %i", salhora);
        printf("\nhoras trabajadas: %i", horas);
        printf("\nSalario normal: %i", salnormal);
        printf("\nsalario extra: 0");
        printf("\nsalario total: %i", saltotal);
        break;

        case 2:
        salextra = (salhora * (horas - 40) * 2);

        salnormal = salhora * 40;

        saltotal = salnormal + salextra;

        printf("\nsalario por hora: %i", salhora);
        printf("\nhoras trabajadas: %i", horas);
        printf("\nSalario normal: %i", salnormal);
        printf("\nsalario extra: %i", salextra);
        printf("\nsalario total: %i", saltotal);
        break;

        case 3:
        salextra = ((salhora * 9) * 2) + ((salhora * (horas - 49)) * 3);

        salnormal = salhora * 40;

        saltotal = salnormal + salextra;

        printf("\nsalario por hora: %i", salhora);
        printf("\nhoras trabajadas: %i", horas);
        printf("\nSalario normal: %i", salnormal);
        printf("\nsalario extra: %i", salextra);
        printf("\nsalario total: %i", saltotal);
        break;

        default:
        printf("Error");
    }
    return 0;
}