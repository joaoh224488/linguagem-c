#include <stdio.h>
#include <stdlib.h>

int search(int *arr, int n, int v);

int main(){

    int arr[8] = {1, 2, 3, 5, 10, -8, 2, 1};
    printf("%d\n", search(arr, 8, 2));
    printf("%d\n", search(&arr[0], 8, 5));
    printf("%d\n", search(arr + 3, 5, 1));
    printf("%d\n", search(arr, 8, 4));
    return 0;
}

int search(int *arr, int n, int v){
    for(int i = 0; i < n; i++){
        if (arr[i] == v)
            return i;
    }
    return -1;
}