#include <stdio.h>
#include <stdlib.h>

struct Pessoa
{
    char nome[100];
    int idade;
    double altura;
};


int main(){

 struct Pessoa p = {};

    scanf("%[^\n]s", p.nome);
    scanf("%d", &p.idade);
    scanf("%lf", &p.altura);

    printf("%s\n", p.nome);
    printf("%d\n", p.idade);
    printf("%.2lf\n", p.altura);
 
    return 0;
}