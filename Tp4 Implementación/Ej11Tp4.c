#include <stdio.h>

int i;

int main(){

    for (i = 1; i <= 100; i++){
        if (i % 2 == 0 && i % 4 == 0 && i % 6 == 0){
            printf("%d ", i);
        }
    }

    return 0;
    
}