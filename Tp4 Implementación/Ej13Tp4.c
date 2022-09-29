#include <stdio.h>
#include <math.h>

int a;
int y;
int resultado;

int main(){

    printf("Ingrese el número a elevar: ");
    scanf("%d", &a);

    printf("Ingrese la potencia: ");
    scanf("%d", &y);

    resultado = pow(a,y);

    printf("El resultado es %d", resultado); //testing

    return 0;
    
}