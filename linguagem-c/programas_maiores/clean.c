#include "clean.h"

void remove_negativo(int *arr, int n){
    for (int i = 0; i < n; i++){

        if (arr[i] < 0)
        arr[i] = 0;
    }
}

void remove_maior_que_dez(int *arr, int n){
    for (int i = 0; i < n; i++){

        if (arr[i] > 10)
        arr[i] = 10;
    }
}