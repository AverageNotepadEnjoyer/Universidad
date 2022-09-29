#include <stdio.h>

float lado1;
float lado2;
float lado3;

float main(){

printf("Ingrese el valor del primer lado: ");
scanf("%f", &lado1);
if (lado1 <= 0){
    printf("El valor ingresado no es válido");
    return 0;
}

printf("Ingrese el valor del segundo lado: ");
scanf("%f", &lado2);
if (lado2 <= 0){
    printf("El valor ingresado no es válido");
    return 0;
}

printf("Ingrese el valor del tercer lado: ");
scanf("%f", &lado3);
if (lado3 <= 0){
    printf("El valor ingresado no es válido");
    return 0;
}

if (lado1 == lado2 && lado2 == lado3){
    printf("El triángulo es equilátero");
}else{
    if (lado1 == lado2 && lado1 != lado3){
        printf("El triángulo es isósceles");
    }else{
        if (lado1 == lado3 && lado1 != lado2){
            printf("El triángulo es isósceles");
        }else{
            if (lado2 == lado3 && lado2 != lado1){
                printf("El triángulo es isósceles");
            }else{
                printf("El triángulo es escaleno");
            }
        }
    }
}
}