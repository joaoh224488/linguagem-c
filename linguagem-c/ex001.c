#include<stdio.h>

int main() {

    int i = 10;
    int j = 20;
    float x = 3.14;
    float y = 2.512342;
    /* Observe que as variáveis int só podem ser impressas com os identificadores %d*/
    /* E as floats só podem ser impressas com os identificadores %f*/
    /* Se colocar o marcador de impressão errado, dara erro.*/

    printf("%d\n", i);

    printf("Esse é o valor i.\n Já o valor de j, x e y são, respectivamente: \n %d, %f, %.2e", j, x, y);

    /*Observe o erro: */

    printf("\nValor problemático y é:  %d", y); 

    return 0;   

}