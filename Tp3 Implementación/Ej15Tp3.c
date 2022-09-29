#include <stdio.h>
#include <string.h>

char r1[30];
char r2[30];
char r3[30];
int pts;

int main(){

pts = 0;

printf("Ingrese la primer respuesta:\n");
scanf("%s",r1);
printf("Ingrese la segunda respuesta:\n");
scanf(" %[^\n]",r2);
printf("Ingrese la tercer respuesta:\n");
scanf("%s",r3);

if (strcmp(r1,"Donatelo")==0){
    pts = pts + 100;
}

if (strcmp(r2, "La piedad")==0){
    pts = pts + 100;
}

if (strcmp(r3, "Rafael")==0){
    pts = pts + 100;
}

printf("El puntaje final es: %i", pts);

}