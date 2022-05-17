#include <stdio.h>

int main() {
    int dia, mes, ano;

    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("No formato americano a data inserida é: %.2d/%.2d/%.4d", mes, dia, ano);

    return 0;


}