#include <stdio.h>

int n;
int i;
char msg, igual;

void main(){
    
    i = 1;

    do{
    printf("Ingrese un número entre 1 y 10: ");
    scanf("%d", &n);
    }while (!(n >= 1 && n <= 10));

        while (i <= 10){
            printf("%d x %d = %d \n", n, i, (n * i));
              i = i + 1;
        }
    
}