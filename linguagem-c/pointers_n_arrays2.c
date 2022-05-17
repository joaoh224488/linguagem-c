#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define N 3


int main(){

    int a[N] = {1, 2, 3}, *p;

    for (p = a + N - 1; p >= a; p--){
        printf("%d\n", *p);
    }

    return 0;
}

