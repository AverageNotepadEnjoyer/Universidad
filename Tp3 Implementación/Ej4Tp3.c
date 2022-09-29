#include <stdio.h>

int kmHechos;
float precioTotal;

float main(){

printf("Ingrese la cantidad de kilómetros realizados: ");
scanf("%i", &kmHechos);

if (kmHechos <= 300){
    precioTotal = (kmHechos * 30);
}else{
    if (300 < kmHechos && kmHechos <= 1000){
        precioTotal = ((kmHechos * 30) + ((kmHechos - 300) * 0.75));
    }else{
        precioTotal = ((kmHechos * 30) + ((kmHechos - 1000) * 0.5));
    }
}

printf("El precio total es: $%.2f", precioTotal);

}