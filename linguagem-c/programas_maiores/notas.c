#include <stdio.h>
#include "clean.h"
#include "stats.h"
#define N 6



int main(){
    int notas[N] = {5, 7, 8, -5, 15, 10};

    remove_negativo(notas, N);

    remove_maior_que_dez(notas, N);

    for (int i = 0; i < N; i++){

        printf("%d\n", notas[i]);
    }

    printf("%d\n", max(notas, N));
    printf("%d\n", min(notas, N));
    printf("%f\n", med(notas, N));


    return 0;
}