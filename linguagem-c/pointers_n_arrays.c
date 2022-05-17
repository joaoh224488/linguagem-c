#include <stdlib.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define N 3

int main(){

    int a[N] = {1, 2, 3}, sum = 0, *p;

    for (p = a; p < a + N; p++){
        sum += *p;
    }
    printf("%d\n", sum);

    return 0;
}
// a aponta sempre para o PRIMEIRO ELEMENTO
