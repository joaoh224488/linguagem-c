#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 0;
    char ch; 


    do{  
        ch = getchar();
        if (ch == '\n'){
            break;
        }
        i++;
    }while(ch != '\n');
    
    printf("O número de caracteres foi %d. \n", i);

    return 0;
}