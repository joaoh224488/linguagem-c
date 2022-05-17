#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 0;
    char ch; 


    while (1)
    {  
        ch = getchar();
        if (ch == '\n'){
            break;
        }
        
        else{
            i++;
        }
    
    }
    printf("O número de caracteres foi %d. \n", i);

    return 0;
}