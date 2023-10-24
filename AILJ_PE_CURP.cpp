// Angel Ignacio Leal Juarez
// Matricula: 365334
// Fecha: 20 de Octubre del 2023
// Actividad 9 3/4
// Realiza un programa que sirva para generar el CURP de una persona

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "lib_curp.cpp"

struct datos_curp{
    char nombre[30];
    char appat[30];
    char apmat[30];
    char dia[30];
    char mes[30];
    char anno[30];
    char sexo[30];
    char estado[30];
}
datos_curp1={};

void capt_datos();
void menu_estados(void);
int altisonante(char cadena[30]);
int val_n_tilde(char cadena[30]);
int vali_simbolos(char scadena[30]);
int n_maria_jose(char cadena[30]);
int elim_m_j(char cad[30], int elim,int len);
int u_dieresis(char cadena[30]);
int vali_nom_comp(char cadena[30]);
int elim_nom_comp(char cad[30],int elim, int len);
int val_vocal(char cadena[30]);
int vali_cad(char cadena[30], char msge[30]);
int vali_cad_rango(char cdato[30], char msge[30], int xf, int ri, int rf);
int val_dia_mes(int dias, int mes);
int anio_bis(int nb, int banio);
int val_cons(char cadena[30]);

//////////////////// MAIN
int main()
{ 
    system("cls");
    printf("---- GENERAR CURP ---0-\n");
    printf("\n");
    printf(" 1- generar curp\n");
    printf(" 2.- salir\n");
    int op = validar(1,2,"Elige una opcion: ");

    if (op == 2)
    {
        system("cls");
        printf("Hasta luego :)");
        return 0;
    }

    system("cls");

    char curp[18];
    capt_datos();

    n_maria_jose(datos_curp1.nombre);

    vali_nom_comp(datos_curp1.nombre);
    vali_nom_comp(datos_curp1.appat);
    vali_nom_comp(datos_curp1.apmat);

    val_n_tilde(datos_curp1.nombre);
    val_n_tilde(datos_curp1.appat);
    val_n_tilde(datos_curp1.apmat);

    vali_simbolos(datos_curp1.nombre);
    vali_simbolos(datos_curp1.appat);
    vali_simbolos(datos_curp1.apmat);

    u_dieresis(datos_curp1.nombre);
    u_dieresis(datos_curp1.appat);
    u_dieresis(datos_curp1.apmat);

    curp[0] = datos_curp1.appat[0];
    curp[1] = datos_curp1.appat[val_vocal(datos_curp1.appat)];
    curp[2] = datos_curp1.apmat[0];
    curp[3] = datos_curp1.nombre[0];
    curp[4] = datos_curp1.anno[2];
    curp[5] = datos_curp1.anno[3];
    curp[6] = datos_curp1.mes[0];
    curp[7] = datos_curp1.mes[1];
    curp[8] = datos_curp1.dia[0];
    curp[9] = datos_curp1.dia[1];

    if (atoi(datos_curp1.sexo) == 1)
    {
        curp[10] = 'H';
    }
    else{
        curp[10] = 'M';
    }

    int nest = atoi(datos_curp1.estado);

    switch(nest)
    {
        case 0:
        curp[11] = 'N';
        curp[12] = 'E';
        break;

        case 1:
        curp[11] = 'A';
        curp[12] = 'S';
        break;

        case 2:
        curp[11] = 'B';
        curp[12] = 'C';
        break;

        case 3:
        curp[11] = 'B';
        curp[12] = 'S';
        break;

        case 4:
        curp[11] = 'C';
        curp[12] = 'C';
        break;

        case 5:
        curp[11] = 'C';
        curp[12] = 'L';
        break;

        case 6:
        curp[11] = 'C';
        curp[12] = 'M';
        break;

        case 7:
        curp[11] = 'C';
        curp[12] = 'S';
        break;

        case 8:
        curp[11] = 'C';
        curp[12] = 'H';
        break;

        case 9:
        curp[11] = 'D';
        curp[12] = 'F';
        break;

        case 10:
        curp[11] = 'D';
        curp[12] = 'G';
        break;

        case 11:
        curp[11] = 'G';
        curp[12] = 'T';
        break;

        case 12:
        curp[11] = 'G';
        curp[12] = 'R';
        break;

        case 13:
        curp[11] = 'H';
        curp[12] = 'G';
        break;

        case 14:
        curp[11] = 'J';
        curp[12] = 'C';
        break;

        case 15:
        curp[11] = 'M';
        curp[12] = 'C';
        break;

        case 16:
        curp[11] = 'M';
        curp[12] = 'N';
        break;

        case 17:
        curp[11] = 'M';
        curp[12] = 'S';
        break;

        case 18:
        curp[11] = 'N';
        curp[12] = 'T';
        break;

        case 19:
        curp[11] = 'N';
        curp[12] = 'L';
        break;

        case 20:
        curp[11] = 'O';
        curp[12] = 'C';
        break;

        case 21:
        curp[11] = 'P';
        curp[12] = 'L';
        break;

        case 22:
        curp[11] = 'Q';
        curp[12] = 'T';
        break;

        case 23:
        curp[11] = 'Q';
        curp[12] = 'R';
        break;

        case 24:
        curp[11] = 'S';
        curp[12] = 'P';
        break;

        case 25:
        curp[11] = 'S';
        curp[12] = 'L';
        break;

        case 26:
        curp[11] = 'S';
        curp[12] = 'R';
        break;

        case 27:
        curp[11] = 'T';
        curp[12] = 'C';
        break;

        case 28:
        curp[11] = 'T';
        curp[12] = 'S';
        break;

        case 29:
        curp[11] = 'T';
        curp[12] = 'L';
        break;

        case 30:
        curp[11] = 'V';
        curp[12] = 'Z';
        break;

        case 31:
        curp[11] = 'Y';
        curp[12] = 'N';
        break;

        case 32:
        curp[11] = 'Z';
        curp[12] = 'S';
        break;
    }

    curp[13] = datos_curp1.appat[val_cons(datos_curp1.appat)];
    curp[14] = datos_curp1.apmat[val_cons(datos_curp1.apmat)];
    curp[15] = datos_curp1.nombre[val_cons(datos_curp1.nombre)];

    int hc1 = atoi(datos_curp1.anno);

    if (hc1 < 2000)
    {
        if (curp[4] == '0'){
            curp[16] = '0';
        }

        if (curp[4] == '1'){
            curp[16] = '1';
        }

        if (curp[4] == '2'){
            curp[16] = '2';
        }

        if (curp[4] == '3'){
            curp[16] = '3';
        }

        if (curp[4] == '4'){
            curp[16] = '4';
        }

        if (curp[4] == '5'){
            curp[16] = '5';
        }

        if (curp[4] == '6'){
            curp[16] = '6';
        }

        if (curp[4] == '7'){
            curp[16] = '7';
        }

        if (curp[4] == '8'){
            curp[16] = '8';
        }

        if (curp[4] == '9'){
            curp[16] = '9';
        }
    }
    else{
        if (curp[4] == '0'){
            curp[16] = 'A';
        }


        if (curp[4] == '1'){
            curp[16] = 'B';
        }

        if (curp[4] == '2'){
            curp[16] = 'C';
        }

        if (curp[4] == '3'){
            curp[16] = 'D';
        }

        if (curp[4] == '4'){
            curp[16] = 'E';
        }

        if (curp[4] == '5'){
            curp[16] = 'F';
        }

        if (curp[4] == '6'){
            curp[16] = 'G';
        }

        if (curp[4] == '7'){
            curp[16] = 'H';
        }

        if (curp[4] == '8'){
            curp[16] = 'I';
        }

        if (curp[4] == '9'){
            curp[16] = 'J';
        }
    }
    curp[17] = '\0';
    int nran = rand()%10;
    sprintf(curp + strlen(curp), "%d", nran);
    curp[18] = '\0';


    altisonante(curp);

    printf("Esta es su CURP: %s", curp);
    printf("\n");
    system("pause");
    system("cls");

    return main();
}

///////////capturar datos para curp/////////////// 
void capt_datos()
{
    vali_cad(datos_curp1.nombre, "Nombre(s): ");
    system("cls");

    vali_cad(datos_curp1.appat, "Apellido paterno (Si no tiene ponga 'X'): ");
    system("cls");

    vali_cad(datos_curp1.apmat, "Apellido materno (Si no tiene ponga 'X'): ");
    system("cls");

    vali_cad_rango(datos_curp1.anno, "anio de nacimiento (YYYY): ", 4, 1900, 2023);
    system("cls");

    vali_cad_rango(datos_curp1.mes, "Mes de nacimiento (MM): ",2, 1, 12);
    system("cls");

    vali_cad_rango(datos_curp1.dia, "Dia de nacimiento (DD): ",2, 1, val_dia_mes(atoi(datos_curp1.dia), atoi(datos_curp1.mes)));
    system("cls");

    printf("\nSexo: \n");
    printf("1.- Hombre\n");
    printf("2.- Mujer\n");
    vali_cad_rango(datos_curp1.sexo, "\nEliga una opcion: ", 1, 1, 2);
    system("cls");

    printf("\nEstado: \n");
    menu_estados();
    vali_cad_rango(datos_curp1.estado, "\nEliga una opcion (XX): ", 2, 0, 32);
    system("cls");
}
///////////////////////////// MENU DE ESTADOS
void menu_estados(void)
{
    printf("01.- Aguascalientes         02.- Baja California\n");
    printf("03.- Baja California Sur    04.- Campeche\n");
    printf("05.- Coahuila               06.- Colima\n");
    printf("07.- Chiapas                08.- Chihuahua\n");
    printf("09.- Ciudad de Mexico       10.- Durango\n");
    printf("11.- Guanajuato             12.- Guerrero\n");
    printf("13.- Hidalgo                14.- Jalisco\n");
    printf("15.- Estado de Mexico       16.- Michoacan\n");
    printf("17.- Morelos                18.- Nayarit\n");
    printf("19.- Nuevo Leon             20.- Oaxaca\n");
    printf("21.- Puebla                 22.- Queretaro\n");
    printf("22.- Queretaro              23.- Quintana Roo\n");
    printf("24.- San Luis Potosi        25.- Sinalioa\n");
    printf("26.- Sonora                 27.- Tabasco\n");
    printf("28.- Tamaulipas             29.- Tlaxcala\n");
    printf("30.- Veracruz               31.- Yucatan\n");
    printf("32.- Zacatecas              00.- Nacido en el extranjero\n");
}
////////////////////// VALIDAR SIMBOLOS
int vali_simbolos(char scadena[30])
{
    int i=0;

    do{
        int x = isalpha(scadena[i]);

        if(x==0)

        {
            scadena[i] = 'X';
        }
        i++;

    }while(i<strlen(scadena));

    return 0;
}

///////////////// VALIDAR PALABRA ALTISONANTE
int altisonante(char cadena[30])
{
    int i = 0;
    int x;
    char pmalas[55][5] = {"BACA","BAKA","BUEI","BUEY","CACA","CACO","CAGA","CAGO","CAKA","CAKO","COGE","COJA","COJE","COJI","COJO","CULO","FETO","GUEY","JOTO","KACA","KACO","KAGA","KAGO","KOGE","KOJO","KAKA","KULO","MAME","MAMO","MEAR","MEAS","MEON","MION","MOCO","MULA","PEDA","PEDO","PENE","PUTA","PUTO","QULO","RATA","RUIN","SENO","TETA","VACA","VAGA","VAGO","VAKA","VUEY","VUEI","WUEI","WUEY"};

    strupr(cadena);

    do{
    x = strcmp(cadena,pmalas[i]);
    if(x==0){
        cadena[1]='X';
    }
    else{
        i++;
    }
    }while(i<55);

    return 0;
}

////////////////////////7 VALIDAR 1ER APELLIDO INICIA CON Ñ
int val_n_tilde(char cadena[30])
{
    int i=0;

    int lon = strlen(cadena);
    strupr(cadena);

    do{
        if (cadena[i] == -92)
        {
            cadena[i] = 'X';
        }
        i++;

    }while(i<lon);

    return 0;
}

//////////////// 1ER NOMBRE (MARIA / JOSE)
int n_maria_jose(char cadena[30])
{
    strupr(cadena);
    int x = strlen(cadena);

    if (cadena[0]=='M' && cadena[1]=='A' && cadena[2]=='R' && cadena[3]=='I' && cadena[4]=='A' && cadena[5]==' ')
    {
        elim_m_j(cadena,6,x);
    }

    if (cadena[0]=='M' && cadena[1]=='A' && cadena[2]=='.' && cadena[3]==' ')
    {
        elim_m_j(cadena,4,x);
    }

    if (cadena[0]=='M' && cadena[1]=='A' && cadena[2]==' ')
    {
        elim_m_j(cadena,3,x);
    }

    if (cadena[0]=='M' && cadena[1]=='.' && cadena[2]==' ')
    {
        elim_m_j(cadena,3,x);
    }

    if (cadena[0]=='M' && cadena[1]==' ')
    {
        elim_m_j(cadena,2,x);
    }

    if (cadena[0]=='J' && cadena[1]=='O' && cadena[2]=='S' && cadena[3]=='E' && cadena[4]==' ')
    {
        elim_m_j(cadena,5,x);
    }

    if (cadena[0]=='J' && cadena[1]=='.' && cadena[2]==' ')
    {
        elim_m_j(cadena,3,x);
    }

    if (cadena[0]=='J' && cadena[1]==' ')
    {
        elim_m_j(cadena,2,x);
    }

    return 0;
}

//////////////////////// FUNCION ELIMINAR MARIA / JOSE
int elim_m_j(char cad[30],int elim, int len)
{
    int i = 0;
    char copia[30];

    strrev(cad);
            
    strcpy(copia,cad);

    do{
        copia[len-i] = '\0';
        i++;
    }while(i<=elim);

    strrev(copia);
    strcpy(cad,copia);

    return 0;
}

///////////////////////// CAMBIAR U CON DIERESIS (Ü)
int u_dieresis(char cadena[30])
{
    int i=0;

    strupr(cadena);
    int x = strlen(cadena);

    do{
        if (cadena[i]==-102)
        {
            cadena[i] = 'U';
        }
        i++;

    }while(i<x);

    return 0;
}///////////////////////// VALIDAR NOMBRES/APELLIDOS COMPUESTOS
int vali_nom_comp(char cadena[30])
{
    int j=1;

    strupr(cadena);

    do{
        j--;
        int x = strlen(cadena);

            // DA
        if(cadena[0]=='D' && cadena[1]=='A' && cadena[2]==' ')
        {
            elim_nom_comp(cadena,3,x);
            j++;
        }
            //DAS
        if(cadena[0]=='D' && cadena[1]=='A' && cadena[2]=='S' && cadena[3]==' ')
        {
            elim_nom_comp(cadena,4,x);
            j++;
        }
            //DE
        if(cadena[0]=='D' && cadena[1]=='E' && cadena[2]==' ')
        {
            elim_nom_comp(cadena,3,x);
            j++;
        }
            //DEL
        if(cadena[0]=='D' && cadena[1]=='E' && cadena[2]=='L' && cadena[3]==' ')
        {
            elim_nom_comp(cadena,4,x);
            j++;
        }
            //DER
        if(cadena[0]=='D' && cadena[1]=='E' && cadena[2]=='R' && cadena[3]==' ')
        {
            elim_nom_comp(cadena,4,x);
            j++;
        }
            //DI
        if(cadena[0]=='D' && cadena[1]=='I' && cadena[2]==' ')
        {
            elim_nom_comp(cadena,3,x);
            j++;
        }
            //DIE
        if(cadena[0]=='D' && cadena[1]=='I' && cadena[2]=='E' && cadena[3]==' ')
        {
            elim_nom_comp(cadena,4,x);
            j++;
        }
            //DD
        if(cadena[0]=='D' && cadena[1]=='D' && cadena[2]==' ')
        {
            elim_nom_comp(cadena,3,x);
            j++;
        }
            //Y
        if(cadena[0]=='Y' && cadena[1]==' ')
        {
            elim_nom_comp(cadena,2,x);
            j++;
        }
            //EL
        if(cadena[0]=='E' && cadena[1]=='L' && cadena[2]==' ')
        {
            elim_nom_comp(cadena,3,x);
            j++;
        }
            //LA
        if(cadena[0]=='L' && cadena[1]=='A' && cadena[2]==' ')
        {
            elim_nom_comp(cadena,3,x);
            j++;
        }
            //LOS
        if(cadena[0]=='L' && cadena[1]=='O' && cadena[2]=='S' && cadena[3]==' ')
        {
            elim_nom_comp(cadena,4,x);
            j++;
        }
            //LAS
        if(cadena[0]=='L' && cadena[1]=='A' && cadena[2]=='S' && cadena[3]==' ')
        {
            elim_nom_comp(cadena,4,x);
            j++;
        }
            //LE
        if(cadena[0]=='L' && cadena[1]=='E' && cadena[2]==' ')
        {
            elim_nom_comp(cadena,3,x);
            j++;
        }
            //LES
        if(cadena[0]=='L' && cadena[1]=='E' && cadena[2]=='S' && cadena[3]==' ')
        {
            elim_nom_comp(cadena,4,x);
            j++;
        }
            //MAC
        if(cadena[0]=='M' && cadena[1]=='A' && cadena[2]=='C' && cadena[3]==' ')
        {
            elim_nom_comp(cadena,4,x);
            j++;
        }
            //MC
        if(cadena[0]=='M' && cadena[1]=='C' && cadena[2]==' ')
        {
            elim_nom_comp(cadena,3,x);
            j++;
        }
            //VAN
        if(cadena[0]=='V' && cadena[1]=='A' && cadena[2]=='N' && cadena[3]==' ')
        {
            elim_nom_comp(cadena,4,x);
            j++;
        }
            //VON
        if(cadena[0]=='V' && cadena[1]=='O' && cadena[2]=='N' && cadena[3]==' ')
        {
            elim_nom_comp(cadena,4,x);
            j++;
        }

    }while(j!=0);

    return 0;
}

/////////////////eliminar compuestos no validos
int elim_nom_comp(char cad[30],int elim, int len)
{
    int i = 0;
    char copia[30];

    strrev(cad);
            
    strcpy(copia,cad);

    do{
        copia[len-i] = '\0';
        i++;
    }while(i<=elim);

    strrev(copia);
    strcpy(cad,copia);

    return 0;
}
///////////////////VALIDAR VOCAL (2DO ESPACIO CURP)
int val_vocal(char cadena[30])
{
    int i=1;

    int x = strlen(cadena);

    do{
        if(cadena[i]=='A' || cadena[i]=='E' || cadena[i]=='I' || cadena[i]=='O' || cadena[i]=='U')
        {
            return i;
        }
        i++;
    }while(i<x);

    cadena[i]='X';

    return i;
}
////////////////////////// VALIDAR CONSONANTES (14,15,16 CURP)
int val_cons(char cadena[30])
{
    int i=1;

    strupr(cadena);
    int x = strlen(cadena);

    do{
        if(cadena[i] == 'A' || cadena[i] == 'E' || cadena[i] == 'I' || cadena[i] == 'O' || cadena[i] == 'U')
        {
            i++;
        }
        else{
            return i;
        }
    }while(i<x);

    cadena[i]='X';

    return i;
}
/////////////////// VALIDAR CADENA
int vali_cad(char cadena[30], char msge[30])
{
    int i=0;

    printf(msge);
    fflush(stdin);
    gets(cadena);

    strupr(cadena);
    int x = strlen(cadena);

    if (cadena[0] == '\0')
    {
        system("cls");
        printf("\n--NO PUEDE DEJAR ESTE ESPACIO EN BLANCO--\n");
        return vali_cad(cadena,msge);
    }

    if (cadena[0]== ' ')
    {
        system("cls");
        printf("\n--NO PUEDE COLOCAR ESPACIOS AL INICIO--\n");
        return vali_cad(cadena,msge);
    }

    do{
        if(isdigit(cadena[i]))
        {
            system("cls");
            printf("\n--NO PUEDE COLOCAR NUMEROS EN ESTE ESPACIO--\n");
            return vali_cad(cadena,msge);
        }
        i++;
    }while(i<x);

    return 0;
}
//////////////////7 VALIDAR CADENA CON RANGO
int vali_cad_rango(char cdato[30], char msge[30], int xf, int ri, int rf)
{
    int i=0;

    puts(msge);
    fflush(stdin);
    gets(cdato);

    cdato[xf] = '\0';

    if (cdato[0] == '\0')
    {
        system("cls");
        printf("\n--NO PUEDE DEJAR ESTE ESPACIO EN BLANCO--\n");
        return vali_cad_rango(cdato, msge, xf, ri, rf);
    }

    if (cdato[0]== ' ')
    {
        system("cls");
        printf("\n--NO PUEDE COLOCAR ESPACIOS AL INICIO--\n");
        return vali_cad_rango(cdato, msge, xf, ri, rf);
    }

    do{
        if(isdigit(cdato[i]))
        {
            i++;
            int num = atoi(cdato);

            if (num < ri|| num > rf)
            {
                system("cls");
                printf("\n--DATO NO VALIDO--\n");
                return vali_cad_rango(cdato, msge, xf, ri, rf);
            }
        }
        else{
            system("cls");
            printf("\n--DATO NO VALIDO--\n");
            return vali_cad_rango(cdato, msge, xf, ri, rf);
        }
    }while(i<xf);

    return 0;
}

////////////// VALIDAR DIAS DEL MES
int val_dia_mes(int dias, int mes)
{

    switch(mes)
    {
        case 1:
        dias = 31;
        break;

        case 2:
        dias = anio_bis(dias, atoi(datos_curp1.anno));
        break;

        case 3:
        dias = 31;
        break;

        case 4:
        dias = 30;
        break;

        case 5:
        dias = 31;
        break;

        case 6:
        dias = 30;
        break;

        case 7:
        dias = 31;
        break;

        case 8:
        dias = 31;
        break;

        case 9:
        dias = 30;
        break;

        case 10:
        dias = 31;
        break;

        case 11:
        dias = 30;
        break;

        case 12:
        dias = 31;
        break;
    }

    return dias;
}

/////////////////////// VALIDAR AÑO BISIESTO
int anio_bis(int nb, int banio)
{
    if (banio % 4 == 0)
    {
        nb = 29;
    }
    else{
        nb = 28;
    }

    return nb;
}
//////////////////////