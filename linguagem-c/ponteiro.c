#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0


int main(){
    int i, *p = &i;

    printf("Digite um número: \n");
    scanf("%d", &i);

    printf("Antes: %d\n", *p);
    *p *= 10;
    printf("10x: %d\n", i);

    printf("O ponteiro: %p\n", p);


    return 0;
}