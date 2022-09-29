#include <stdio.h>

int anio(){

printf("Ingrese el año a evaluar: ");
scanf("%d", &anio);

if (anio % 4 = 0){
    if (anio % 100 != 0){
        printf("El año es bisiesto");
    }else{
        if (anio % 100 = 0 && anio % 400 = 0){
            printf("El año es bisiesto");
        }else{
            printf("El año no es bisiesto");
        }
    }
}else{
    printf("El año no es bisiesto");
}
}