#include<stdio.h>

void main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a> c){
        printf("O maior é : %d", a);
    }

    if (b>a && b> c){
        printf("O maior é : %d", b);
    }

    if (c>a && c> b){
        printf("O maior é : %d", c);
    }
    return 0;
}