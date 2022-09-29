#include <stdio.h>
#include <string.h>

char msg[100];
char sint1[30];
char sint2[30];
char sint3[30];
char sint4[30];
char sint5[30];
int indicio;

int main(){

printf("Ingrese su primer síntoma: ");
scanf("%s", sint1);
printf("Ingrese su segundo síntoma: ");
scanf("%s", sint2);
printf("Ingrese su tercer síntoma: ");
scanf("%s", sint3);
printf("Ingrese su cuarto síntoma: ");
scanf("%s", sint4);
printf("Ingrese su quinto síntoma: ");
scanf("%s", sint5);

if (strcmp(sint1, "Tos")==0){
    indicio = 1;
}else{
    indicio = 0;
}

if (strcmp(sint2, "Estornudo")==1){
    if (strcmp(sint3, "Fiebre")==1){
        indicio = 0;
    }else{
        indicio = 1;
    }
}else{
    if (strcmp(sint4, "Moco")==0){
        if (strcmp(sint3, "Fiebre")==1){
            indicio = 0;
        }else{
            indicio = 2;
        }
    }else{
        indicio = 3;
    }
}

if (indicio = 1 && (strcmp(sint5, "Flema")==0)){
    strcpy(msg, "Coronavirus");
}else{
    if (indicio = 2 && (strcmp(sint5, "Vómito")==0)){
            strcpy(msg, "Gripe");
    }else{
        if (indicio = 3 && (strcmp(sint5, "Congestión")==0)){
            strcpy(msg, "Resfrío");
        }else{
            strcpy(msg, "Hasta ahora parece no estar enfermo");
        }
}
}

printf("%s", msg);

}