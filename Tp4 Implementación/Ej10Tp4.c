#include <stdio.h>
#include <math.h>

int num;
int  raiz;

int main(){
    
    printf("Ingrese el número positivo a evaluar: ");
    scanf("%d", &num);
    
    if (num <= 1){
        printf("El número ingresado no es válido.");
        return 0;
    }
    
    raiz = sqrt(num);
    
    if (num == 2){
        printf("El número es primo");
        return 0;
    }
    
    while (raiz > 1){
        if (num % raiz == 0){
            printf("El número no es primo");
            return 0;
        }else{
            raiz = raiz - 1;
        }
    }
    
    printf("El número es primo");
    
    return 0;
    
}