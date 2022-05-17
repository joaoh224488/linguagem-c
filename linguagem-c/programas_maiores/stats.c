#include "stats.h"

int max(int *arr, int n){

    int maximo = arr[0];

    for (int i = 0; i < n; i++){
        if (arr[i] > maximo){
            maximo = arr[i];
        }
    }
    return maximo;
}

int min(int *arr, int n){

    int minimo = arr[0];

    for (int i = 0; i < n; i++){
        if (arr[i] < minimo){
            minimo = arr[i];
        }
    }
    return minimo;
}

float med(int *arr, int n){

    float med = 0.0;

    for (int i = 0; i < n; i++){
        med += arr[i];
    }
    med /= (float) n;
    return med;
}