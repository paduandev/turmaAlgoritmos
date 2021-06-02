/*
    Ler 10 números inteiros, e exibir o maior dos valores lidos

*/

#include <stdio.h>
#define TAM 10
int main()
{
    int numeros[TAM];
    int i, maior;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o %do. numero: ", (i+1));
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    for (i = 1; i < TAM; i++)
    {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("O maior valor digitado: %d\n", maior);

    return 0;
}