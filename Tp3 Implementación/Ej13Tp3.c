#include <stdio.h>

int n1;
int n2;
int n3;

int main(){

printf("Ingrese el tiempo del primer nadador: ");
scanf("%i", &n1);
if (n1 <= 0){
    printf("El tiempo ingresado no es válido");
    return 0;
}

printf("Ingrese el tiempo del segundo nadador: ");
scanf("%i", &n2);
if (n2 <= 0){
    printf("El tiempo ingresado no es válido");
    return 0;
}

printf("Ingrese el tiempo del tercer nadador: ");
scanf("%i", &n3);
if (n3 <= 0){
    printf("El tiempo ingresado no es válido");
    return 0;
}

if (n1 < n2 && n2 < n3){
    printf("Los tiempos están en orden ascendente");
}else{
    if (n1 > n2 && n2 > n3){
        printf("Los tiempos están en orden descendente");
    }else{
        printf("Los tiempos están desordenados");
    }
}
}