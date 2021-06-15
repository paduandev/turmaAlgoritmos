#include <stdio.h>

int main()
{
    int original;

    original = 10;

    alterar(original); // passagem de variável "por valor", fazemos uma cópia do valor

    printf("original = %d\n", original);
    
    return 0;
}

void alterar(int copia)
{
    printf("copia antes = %d\n", copia);
    copia = 20;
    printf("copia depois = %d\n", copia);
}