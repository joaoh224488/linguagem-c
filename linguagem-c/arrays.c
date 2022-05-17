#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[10];

    for (int i = 9; i>=0; i--){
        scanf("%d", &array[i]);
    }
    printf("[");

    for (int j =0; j<=9; j++){
        if (j < 9){
        printf("%d, ", array[j]);
        }
        else{
            printf("%d", array[j]);
        }

    }
    printf("] \n");
    return 0;
}