#include <stdio.h>

int edad;

int main(){

printf("Ingrese tu edad: ");
scanf("%i", &edad);

if (1 <= edad && edad <= 4){
  printf("Nivel: Preescolar");
}else{
    if (edad == 5){
      printf("Nivel: Jardín de infantes");
    }else{
      if (6 <= edad && edad <= 11){
        printf("Nivel: Primaria");
      }else{
        if (12 <= edad && edad <= 17){
          printf("Nivel: Secundario");
        }else{
          if (edad > 17){
            printf("Nivel: Universitario");
          }else{
            printf("La edad ingresada no es válida");
          }
        }
      }
    }
}
}
