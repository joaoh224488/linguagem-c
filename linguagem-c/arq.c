#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++){

        printf("O %d° é %s\n", i + 1, argv[i]);
    }
    return 0;
}
