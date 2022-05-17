#include <stdio.h>
#include <stdlib.h>


int main(){

    char let;
    int letras[26] = {0}, maior_freq = 0;

    while (let != '\n'){
        let = getchar();

        if(let >= 'A' && let <= 'Z'){

            letras[let - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++){
        if(letras[i] > maior_freq){
            maior_freq = letras[i];
        }
    }
    printf("Seu palpite deve possuir a(s) letra(s): \n");
    for (int j = 0; j < 26; j++){
        if (letras[j] == maior_freq){
            putchar(j + 'A');
            putchar('\n');
        }
    }
    return 0;
}