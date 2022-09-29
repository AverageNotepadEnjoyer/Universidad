#include <stdio.h>

int horas;
int salario;

int main(){

printf("Ingrese la cantidad de horas trabajadas: ");
scanf("%i", &horas);
if (horas <= 0){
    printf("La cantidad de horas ingresadas no es válida");
    return 0;
}

if (horas <= 40){
    salario = horas * 10;
}else{
    salario = 40 * 10 + (horas - 40) * (10 * 1.5);
}

printf("El sueldo correspondiente es de $%.0i", salario);

}