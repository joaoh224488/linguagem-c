#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,valor, q_dig= 1;

    printf("Digite o número:    ");
    scanf("%d", &valor);
    n = valor;

    if (valor < 1000000000 & valor > 0){

        valor = valor/10;

        while (valor >0 ){

            q_dig++;
            
            valor = valor/10;

        }
        if (q_dig== 1){
            printf("O número %d possui 1 dígito.", n);
        }
        else{
            printf("O número %d possui %d dígitos.", n, q_dig);
        }
    }
    else{
        if (valor >= 1000000000){
            printf("O valor digitado possui mais do que 9 dígitos. Digite um valor menor");
        }
        if (valor < 0){
            printf("O valor digitado é negativo. Digite um valor positivo.");
        }
    }
    
    return 0;
}