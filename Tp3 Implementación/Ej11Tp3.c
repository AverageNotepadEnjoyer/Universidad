#include <stdio.h>

int mes;

int main(){

printf("Ingrese el número del mes: ");
scanf("%i", &mes);

if (mes < 1 || mes > 12){
    printf("El mes ingresado no es válido");
    return 0;
}

if (mes == 1){
    printf("El mes %i tiene 31 días", mes);
}else{
    if (mes == 2){
        printf("El mes %i tiene 28 días", mes);
    }else{
        if (mes == 3){
            printf("El mes %i tiene 31 días", mes);
        }else{
            if (mes == 4){
                printf("El mes %i tiene 30 días", mes);
            }else{
                if (mes == 5){
                    printf("El mes %i tiene 31 días", mes);
                }else{
                    if (mes == 6){
                        printf("El mes %i tiene 30 días", mes);
                    }else{
                        if (mes == 7){
                            printf("El mes %i tiene 31 días", mes);
                        }else{
                            if (mes == 8){
                                printf("El mes %i tiene 31 días", mes);
                            }else{
                                if (mes == 9){
                                    printf("El mes %i tiene 30 días", mes);
                                }else{
                                    if (mes == 10){
                                        printf("El mes %i tiene 31 días", mes);
                                    }else{
                                        if (mes == 11){
                                            printf("El mes %i tiene 30 días", mes);
                                            }else{
                                                if (mes == 12){
                                                    printf("El mes %i tiene 31 días", mes);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}