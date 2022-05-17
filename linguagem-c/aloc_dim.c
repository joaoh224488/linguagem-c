#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *cat(char *str1, char *str2);

int main(){

    char *s, str1[10], str2[10];
    printf("Digite a primeira string:   \n");
    
    scanf("%s", str1);

    printf("Digite a segunda string:   \n");
    scanf("%s", str2);

    printf("Digite a string concatenada:   \n");
    s = cat(str1, str2);
    puts(s);

    return 0;
}

char *cat(char *str1, char *str2){

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
    p[strlen(str1) + strlen(str2)] = '\0';

    return p;
    }