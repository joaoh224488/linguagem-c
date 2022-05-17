#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, valor, soma=0;

    printf("Digite o número:    ");

    scanf("%d", &valor);

    n = valor;

    if (n < 1000000000 & n >0){
        while (valor != 0){

            soma += valor % 10;
            valor = valor /10;
        }

        printf("A soma dos algarismos de %d é %d.", n, soma);
    }
    else{
        if (valor >= 1000000000){
            printf("O valor digitado possui mais do que 9 dígitos. Digite um valor menor.");
        }
        if (valor < 0){
            printf("O valor digitado é negativo. Digite um valor positivo.");
        }
    }

    return 0;
}