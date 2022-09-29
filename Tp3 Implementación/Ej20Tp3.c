#include <stdio.h>

int hora,min,seg;

int main(){

printf("Ingrese la hora: ");
scanf("%d", &hora);
if (hora < 0 || hora >= 24){
    printf("La hora ingresada no es válida");
}
printf("Ingrese el minuto: ");
scanf("%d", &min);
if (min < 0 || min >= 60){
    printf("El minuto ingresado no es válido");
}
printf("Ingrese el segundo: ");
scanf("%d", &seg);
if (seg < 0 || seg >= 60){
    printf("El segundo ingresado no es válido");
}

if ( 0 <= seg && seg <= 58){
    seg = seg + 1;
}else{
    if (0 <= min && min <= 58){
        seg = 0;
        min = min + 1;
    }else{
        if (0 <= hora && hora <= 22){
            seg = 0;
            min = 0;
            hora = hora + 1;
        }else{
            seg = 0;
            min = 0;
            hora = 0;
        }
    }
}

if (hora <= 9 && min <= 9 && seg <= 9){
    printf("La hora es 0%d:0%d:0%d",hora,min,seg);
}else{
    if (hora > 9 && min > 9 && seg > 9){
        printf("La hora es %d:%d:%d",hora,min,seg);
    }else{
        if (hora <= 9 && min > 9 && seg > 9){
            printf("La hora es 0%d:%d:%d",hora,min,seg);
        }else{
            if (hora > 9 && min <= 9 && seg > 9){
                printf("La hora es %d:0%d:%d",hora,min,seg);
            }else{
                if (hora > 9 && min > 9 && seg <= 9){
                    printf("La hora es %d:%d:0%d",hora,min,seg);
                }else{
                    if (hora <= 9 && min <= 9 && seg > 9){
                        printf("La hora es 0%d:0%d:%d",hora,min,seg);
                    }else{
                        if (hora > 9 && min <= 9 && seg <= 9){
                            printf("La hora es %d:0%d:0%d",hora,min,seg);
                        }else{
                            if (hora <= 9 && min > 9 && seg <= 9){
                                printf("La hora es 0%d:%d:0%d",hora,min,seg);
                            }
                        }
                    }
                }
            }
        }
    }
}

return 0;

}