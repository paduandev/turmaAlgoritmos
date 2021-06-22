#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeros[100];
    int contagem[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        numeros[i] = (int)(rand() % 11); 
    }

    for (int i = 0; i < 100; i++)
    {
        contagem[numeros[i]]++;
    }

    // exibir os resultados
    exibirRelatorio(contagem);

    return 0;
}

void exibirRelatorio(int contagem[])
{
    for (int i = 0; i < 11; i++)
    {
        printf("%2d - %2d vez(es): ", i, contagem[i]);
        asteriscos(contagem[i]);
    }
}

void asteriscos(int qtde)
{
    for(int i =0; i < qtde; i++)
    {
        printf("*");
    }
    printf("\n");
}