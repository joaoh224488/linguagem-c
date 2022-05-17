#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[100];
    int idade;
    double altura;
} Pessoa;


int main(){

    Pessoa p;

    printf("Digite o nome:  \n");
    scanf("%[^\n]s", p.nome);
    printf("Digite a idade:  \n");
    scanf("%d", &p.idade);
    printf("Digite a altura:  \n");
    scanf("%lf", &p.altura);

    printf("%s\n", p.nome);
    printf("%d\n", p.idade);
    printf("%.2lf\n", p.altura);
 
    return 0;
}