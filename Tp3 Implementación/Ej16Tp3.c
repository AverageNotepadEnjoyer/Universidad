#include <stdio.h>

int a;
int b;
int c;
int d;

int main(){

printf("Ingrese el coeficiente de a: ");
scanf("%d", &a);
printf("Ingrese el coeficiente de b: ");
scanf("%d", &b);
printf("Ingrese el coeficiente de c: ");
scanf("%d", &c);

if (a == 0){
    if (b == 0){
        printf("La ecuación es degenerada");
    }else{
        printf("Existe una raíz única");
    }
}

d = ((b * b) - (4 * a * c));

if (a != 0 && b != 0){
    if (d == 0){
        printf("Hay una sola raíz");
    }else{
        if (d > 0){
            printf("Hay dos raíces");
        }else{
            printf("Hay dos raíces complejas");
        }
    }
}
}