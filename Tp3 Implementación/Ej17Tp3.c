#include <stdio.h>
#include <string.h>
#include <math.h>

int xP,yP,xA,yA,xB,yB,radio,xCirc,yCirc;
float distancia;
int rec, circ;

int main(){

printf("Ingrese el valor del eje x del círculo: ");
scanf("%d", &xCirc);
printf("Ingrese el valor del eje y del círculo: ");
scanf("%d", &yCirc);
printf("Ingrese el valor del radio: ");
scanf("%d", &radio);
printf("Ingrese el valor del eje x del vértice A del rectángulo: ");
scanf("%d", &xA);
printf("Ingrese el valor del eje y del vértice A del rectángulo: ");
scanf("%d", &yA);
printf("Ingrese el valor del eje x del vértice B del rectángulo: ");
scanf("%d", &xB);
printf("Ingrese el valor del eje y del vértice B del rectángulo: ");
scanf("%d", &yB);
printf("Ingrese el valor del eje x del punto problema: ");
scanf("%d", &xP);
printf("Ingrese el valor del eje y del punto problema: ");
scanf("%d", &yP);

if (xP >= xA && xP <= xB && yP >= yA && yP <= yB){
    rec = 1;
}else{
    if (xP >= xA && xP <= xB && yP <= yA && yP >= yB){
        rec = 1;
    }else{
        if (xP >= xB && xP <= xA && yP <= yA && yP >= yB){
            rec = 1;
        }else{
            if (xP >= xB && xP <= xA && yP <= yB && yP >= yA){
                rec = 1;
            }else{
                rec = 0;
            }
        }
    }
}

distancia = (sqrt((pow((xP - xCirc),2)) + (pow((yP - yCirc),2))));

if (distancia > radio){
    circ = 0;
}else{
    circ = 1;
}

if (rec == 1 && circ == 1){
    printf("El punto es interior a ambos");
}else{
    if (rec == 1 && circ == 0){
        printf("El punto es interior al rectángulo");
    }else{
        if (rec == 0 && circ == 1){
            printf("El punto es interior al círculo");
        }else{
            if (rec == 0 && circ == 0){
                printf("El punto es exterior a ambos");
            }
        }
    }
}
}