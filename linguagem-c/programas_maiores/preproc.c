#include <stdio.h>
#include <stdlib.h>

int main(){

    #ifdef __APPLE__
    printf("mac\n");

    #elif __WINDOWS__
    printf("Windows\n");

    #elif __linux__
    printf("ESCOLHA CERTA\n");

    #else
    printf("Outro sistema\n");

    #endif




    return 0;
}