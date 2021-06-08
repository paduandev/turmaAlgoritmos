
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

int main()
{
    int numeros[TAMANHO];
    int i;

    srand( time(NULL) ); // determina o ponto de início da geração dos números aleatórios
                        // time retorna o número de segundos desde 1/01/1970 até a data atual

    for (i = 0; i < TAMANHO; i++)
    {
        numeros[i] = rand() % 11;
        printf("%d ", numeros[i]);
    }
    printf("\n");

    for (i = TAMANHO - 1; i >= 0; i--)
    {
        printf("%d ", numeros[i]);
    }

    return 0;
}