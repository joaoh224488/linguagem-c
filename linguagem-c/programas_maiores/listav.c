#include <stdio.h>
#include <stdlib.h>

int lenstr(char *str);
char concat(int argc, char *argv[]);

int main(int argc, char *argv[]){
    
    argc <= 5 ? printf("%s\n", concat(argc, argv)) : printf("Too many strings.\n");


    return 0;
}


int lenstr(char *str){
    int len = 0;
    while (*str != 0){
        len++;
        str++;
    }

    return len;

}

char concat(int argc, char *argv[]){

    char conc[100];

    for (int i = 0; i < argc; i++){
        if (lenstr(argv[i]) <=20){
            for (int j = 0; j <= lenstr(argv[i]); j++){
                conc[j] = argv[i][j];
            }

        }}
    return conc;
}