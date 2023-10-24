
int validar(int ri, int rf, char msge[30])
{
    int opv;

    char opx[30];
    do{
        puts(msge);
        fflush(stdin);
        gets(opx);
        opv = atoi(opx);
    }while(opv<ri || opv>rf);

    return opv;
}