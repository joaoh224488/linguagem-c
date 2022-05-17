#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int array[10] = {0}, n;

    for(int i = 0; i <10; ++i){
        scanf("%d", &n);
        array[n]++;
    }

    for (int i = 0; i < 10; i++){

        printf("%d apareceu %d vezes; \n", i, array[i]);
    }

    return 0;
}