#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cat(char *str1, char *str2);

int main(){

    char *p, str1[5] = "Joao", str2[5] = "Raia";

    cat(str1, str2);

    puts(p);

    return 0;
}

void cat(char *str1, char *str2){

    char *p;
    int n;
    n = strlen(str1) + strlen(str2);
    p = malloc(n + 1);

    for (int i = 0; i < strlen(str1); i++){
        p[i] = str1[i];
    }

    for (int j = 0; j < strlen(str2); j++){
        p[j + strlen(str1)] = str2[j];    
}
    }