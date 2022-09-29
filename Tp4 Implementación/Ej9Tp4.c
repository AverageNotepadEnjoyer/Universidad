#include <stdio.h>

int total;
int monto;

int main(){

    total = 0;
    monto = 0;

    while (monto != 999999){
        printf("Ingrese el siguiente valor: ");
        scanf("%d", &monto);
        if (monto >= 0){
            total = total;
        }else{
            total = total + monto;
        }
    }

    if (monto == 999999){
        total = total;
        printf("El monto final es de %d", total);
    }

}