#include <stdio.h>

int diasFaltantes;
float precioFinal;
char tipoPasaje;

float main(){

printf("Introduzca la cantidad de días faltantes a su fecha de vuelo deseada: ");
scanf("%i", &diasFaltantes);

if (diasFaltantes < 1){
    printf("El número de días es inválido, intente nuevamente.");
    return 0;
}

printf("Si desea comprar un pasaje solo de ida introduzca la letra 'S', caso contrario oprima cualquier letra: ");
scanf("%s", &tipoPasaje);
    
if (tipoPasaje == 'S'){
    if (diasFaltantes >= 30){
        precioFinal = 4650;
    }else{
        if (15 <= diasFaltantes & diasFaltantes <= 29){
            precioFinal = 5350;
        }else{
            if (1 <= diasFaltantes & diasFaltantes <= 14){
                precioFinal = 6875;
            }
        }
}
}else{
  if (diasFaltantes >= 30){
        precioFinal = 9300;
    }else{
        if (15 <= diasFaltantes & diasFaltantes <= 29){
            precioFinal = 10700;
        }else{
            if (1 <= diasFaltantes & diasFaltantes <= 14){
                precioFinal = 13750;
}
}
}
}

printf("El precio final es $%.0f", precioFinal);

}