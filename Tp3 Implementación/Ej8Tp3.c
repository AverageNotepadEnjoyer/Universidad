#include <stdio.h>

int n; //número a evaluar si es múltiplo de 2, múltiplo de 3 o de ambos.

int main(){

printf("Ingrese un número: ");
scanf("%i", &n);

if (n <= 0){
    printf("El número ingresado no es válido");
    return 0;
}

if (n % 2 == 0 && !(n % 3 == 0)){
    printf("El número es solo múltiplo de 2");
}else{
    if (!(n % 2 == 0) && n % 3 == 0){
        printf("El número es solo múltiplo de 3");
    }else{
        if (n % 2 == 0 && n % 3 == 0){
            printf("El número es múltiplo de 2 y 3");
        }else{
            printf("El número no es múltiplo de 2 ni de 3");
        }
    }
}
}