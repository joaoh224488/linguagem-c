#include <stdio.h>
#include <stdlib.h>

int potenc(int b, int n)
 {
    if (n == 0)
        return 1;
    else
        return b * potenc(b, n-1);
    }

int main(){
    int b = 2, n = 3;


    printf("O %d elevado a %d é %d.\n", b, n, potenc(b , n ));
    return 0;
}
