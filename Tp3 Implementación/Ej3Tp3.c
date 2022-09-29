#include <stdio.h>

int numUno;
int numDos;
int numFinal;

int main(){

printf("Ingrese el primer número: ");
scanf("%d", &numUno);

if (numUno < 0 || numUno > 10){
    printf("El número ingresado no es válido");
    return 0;
}

printf("Ingrese el segundo número: ");
scanf("%d", &numDos);

if (numDos < 0 || numDos > 10){
    printf("El número ingresado no es válido");
    return 0;
}

if (numUno >= numDos){
    printf("%d", ((numUno * 10) + numDos));
}else{
    printf("%d", ((numDos * 10) + numUno));
}
}