#include <stdio.h>

int y, i, x;
int n;

int main(){
    y = 0;
    i = 1;
    x = 0;

    printf("Ingrese el número deseado: ");
    scanf("%d", &n);

    while (i <= n){
        y = x + i;
        x = x + i;
        i = i + 1;
    }
    
    printf("El resultado final es: %d", y);
    
    return 0;
}
