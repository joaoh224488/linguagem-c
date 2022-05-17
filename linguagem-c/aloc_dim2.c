#include <stdio.h>
#include <stdlib.h>


int *fill(int n, int v);

int main(){
    int *p, n, v;

    printf("Digite a quantidade: \n");
    scanf("%d", &n);

    printf("Digite o valor: \n");
    scanf("%d", &v);

    p = fill(n, v);
    printf("Lista:  \n");

    for (int i = 0; i < n; i++){

        printf("%d\n", p[i]);
    }
    return 0;
}

int *fill(int n, int v){
    int *a;

    a = malloc(sizeof(v) * n);

    for (int i = 0; i < n; i++){

        a[i] = v;
    }

    return a;
}

