#include <stdio.h>
#include <stdlib.h>

#define N 100

int ler_esp(char *str, int n);

int main(){

    char str[N];
    printf("O número de espaços da string é %d.\n", ler_esp(str, N));

    return 0;
}

int ler_esp(char *str, int n){
    int i = 0, cont = 0;
    char ch = ' ';
    while ((ch = getchar()) != '\n'){
        if (i < n-1){
            i++;
            if (ch == ' ')
                cont++;    
        }
    }
    return cont;
}