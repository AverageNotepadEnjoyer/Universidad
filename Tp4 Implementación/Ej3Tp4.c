#include <stdio.h>
#include <string.h>

char resp[30];

char main(){

do{
    printf("¿Desea continuar? S/N\n");
    scanf("%s",resp);
}while (!(strcmp(resp,"N"))==0);
}