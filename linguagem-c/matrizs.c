#include <stdlib.h>
#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);

    int a[10][10] = {0};

    for (int i = 0; i <n; i++){
        for (int j = 0; j <n; j++){
            if (i == j){

                a[i][j] = 1;
            }

        }
    }

    for (int i = 0; i < n; i++){
        printf("\n");
        for (int j= 0; j <n; j++){
            printf("%d, ", a[i][j]);
        }
    }
    printf("\n");
    return 0;
}