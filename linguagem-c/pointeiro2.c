#include <stdio.h>
#include <stdlib.h>

// PROGRAMA PARA SEPARAR PARTE INTEIRA DA DECIMAL EM C

void decomp(int n, int *h, int *min, int * seg);

int main(){

    int tempo, h, min, seg;
    printf("Digite o tempo em segundos: \n");
    scanf("%d", &tempo);

    decomp(tempo, &h, &min, &seg);
    
    printf("%dh ", h);
    printf("%dmin ", min);
    printf("%dseg", seg);
    putchar('\n');
    return 0;
}

void decomp(int n, int *h, int *min, int * seg){
    *h = n / 3600;
    *min = (n - (3600 * *h)) / 60;
    *seg = (n - (3600 * *h)) - (*min * 60);

}
