#include <stdio.h>

int i;
int n;
float cantAlumnos;
float totalNotas;
float promedio;

float main(){

    i = 1;
    totalNotas = 0;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%f", &cantAlumnos);

    while (i <= cantAlumnos){
        printf("Ingrese la nota del alumno N°%d: ", i);
        scanf("%d", &n);
        totalNotas = totalNotas + n;
        i++;
    }
    
    promedio = totalNotas / cantAlumnos;

    if (promedio > 8){
        printf("El promedio es de %.1f, por lo tanto el rendimiento ha sido elevado.", promedio);
    }else{
        if (promedio >= 6 && promedio <= 8){
            printf("El promedio es de %.1f, por lo tanto el rendimiento ha sido aceptable.", promedio);
        }else{
            printf("El promedio es de %.1f, por lo tanto el rendimiento ha sido bajo.", promedio);
        }
    }
}    
