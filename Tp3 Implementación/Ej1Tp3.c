#include <stdio.h>

int edad;

float main(){

printf("Ingresa tu edad: ");
scanf("%d", &edad);

if (edad >= 18){
    printf("Eres mayor de edad");
}else{
    printf("Eres menor de edad");
}
}