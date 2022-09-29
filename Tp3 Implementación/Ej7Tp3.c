#include <stdio.h>

int t1;
int t2;
int t3;

int main(){

printf("Ingrese el tiempo del primer nadador: ");
scanf("%i", &t1);
if (t1 <= 0){
    printf("El tiempo ingresado no es válido");
    return 0;
}
printf("Ingrese el tiempo del segundo nadador: ");
scanf("%i", &t2);
if (t2 <= 0){
    printf("El tiempo ingresado no es válido");
    return 0;
}
printf("Ingrese el tiempo del tercer nadador: ");
scanf("%i", &t3);
if (t3 <= 0){
    printf("El tiempo ingresado no es válido");
    return 0;
}

if (t1 < t2 && t2 < t3){
    printf("El orden es: 1° %i, 2° %i y 3° %i", t1, t2, t3);
}else{
    if (t1 < t3 && t3 < t2){
    printf("El orden es: 1° %i, 2° %i y 3° %i", t1, t3, t2);
    }else{
        if (t2 < t1 && t1 < t3){
        printf("El orden es: 1° %d, 2° %d y 3° %d", t2, t1, t3);
        }else{
            if (t2 < t3 && t3 < t1){
            printf("El orden es: 1° %i, 2° %i y 3° %i", t2, t3, t1);
            }else{
                if (t3 < t1 && t1 < t2){
                printf("El orden es: 1° %i, 2° %i y 3° %i", t3, t1, t2);
                }else{
                    if (t3 < t2 && t2 < t1){
                    printf("El orden es: 1° %i, 2° %i y 3° %i", t3, t2, t1);
                    }else{
                        printf("Hubo un empate");
                    }
                }
            }    
        }
    }
}            
}