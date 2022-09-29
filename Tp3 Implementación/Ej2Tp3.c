#include <stdio.h>

float precioUno; //precio de la computadora en la página oficial, que es su prioridad siempre que el precio lo permita
float precioDos; //precio de la computadora en una página alternativa
float totalUno;

float main(){

printf("Ingrese el precio de la primer computadora: ");
scanf("%f", &precioUno);
printf("Ingrese el precio de la segunda computadora: ");
scanf("%f", &precioDos);

totalUno = (precioUno + (precioUno / 100));

if (totalUno <= precioDos){
    printf("Debe comprar en la página oficial");
}else{
    printf("Debe comprar en la otra página");
}
}