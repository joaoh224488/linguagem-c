#include <stdio.h>
#include <stdlib.h>

#define N 100

int n_palavra(char *str);

int main(){
    char str[N];

    scanf("%s", str);
    printf("O número de elementos é %d.\n", n_palavra(str));
    return 0;
}

int n_palavra(char *str){
    int cont = 0;
    while (str[cont] != '\0')
        cont++;
    return cont;
}

