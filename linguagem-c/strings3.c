#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100
#define M 100

void cat(char *str1, char *str2);

int main(){

    char str1[N] = "Programacao", str2[M] = "_Estruturada";

    cat(str1, str2);

    printf("%s\n", str1);


    return 0;
}

void cat(char *str1, char *str2){
    unsigned int cont = 0;
    for (int i = 0; str1[i] != 0 ; i++){
        cont++;
    }
    for (int j = 0; str2[j] != 0; j++){

        str1[cont++] = str2[j];
    }
}
