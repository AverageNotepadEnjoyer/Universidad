#include <stdio.h>

int n;

int main(){

n = 1;

do{
    if (n % 2 == 0 && n % 4 == 0 && n % 6 == 0){
        printf("%d",n);
    }
    n = n + 1;
}while !(n = 100);
}