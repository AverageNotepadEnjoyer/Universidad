#include <stdio.h>

int anio, mes, dia;
int bisiesto;

int main(){

printf("Ingrese el día: ");
scanf("%d", &dia);
if (dia < 1 || dia > 31){
    printf("El día ingresado no es válido");
    return 0;
}
printf("Ingrese el mes: ");
scanf("%d", &mes);
if (mes < 1 || mes > 12){
    printf("El mes ingresado no es válido");
    return 0;
}
printf("Ingrese el año: ");
scanf("%d", &anio);

if (anio % 4 == 0){
    if (anio % 100 != 0){
        bisiesto = 1;
    }else{
        if (anio % 100 == 0 && anio % 400 == 0){
            bisiesto = 1;
        }else{
            bisiesto = 0;
        }
    }
}else{
    bisiesto = 0;
}

if ((mes == 2) && (dia > 29)){
    printf("El día ingresado no es válido");
}else{
    if ((mes == 2) && (dia == 29) && (bisiesto == 0)){
        printf("El día ingresado no es válido");
    }else{
        if ((mes == 2) && (dia == 29) && (bisiesto == 1)){
            dia = 1;
            mes = mes + 1;
        }else{
            if ((mes == 2) && (dia >= 1) && (dia <= 28) && (bisiesto == 1)){
                dia = dia + 1;
            }else{
                if ((mes == 2) && (dia == 28) && (bisiesto == 0)){
                    dia = 1;
                    mes = mes + 1;
                }else{
                    if ((mes == 2) && (dia >= 1) && (dia <= 27) && (bisiesto == 0)){
                        dia = dia + 1;
                    }
                }
            }
        }
    }
}

if ((mes == 1 || 3 || 5 || 7 || 8 || 10) && (1 <= dia && dia <= 30)){
    dia = dia + 1;
}else{
    if ((mes == 1 || 3 || 5 || 7 || 8 || 10) && (dia == 31)){
        dia = 1;
        mes = mes + 1;
    }
}

if ((mes == 4 || 6 || 9 || 11) && (1 <= dia && dia <= 29)){
    dia = dia + 1;
}else{
    if ((mes == 4 || 6 || 9 || 11) && (dia == 30)){
        dia = 1;
        mes = mes + 1;
    }
}

if ((mes == 12) && (dia >= 1) && (dia <= 30)){
    dia = dia + 1;
}else{
    if ((mes == 12) && (dia == 31)){
        dia = 1;
        mes = 1;
        anio = anio + 1;
    }
}

printf("El día siguiente será %i/%i/%i", dia,mes,anio);

}