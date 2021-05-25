#include <stdio.h>

#define QTDE_NUMEROS 4

int main()
{
    int numero, contador, soma, impares;
    float media;

    soma = 0;
    impares = 0;
    for (contador = 1; contador <= QTDE_NUMEROS; contador++)
    {
        printf("Digite o %do. numero: ", contador);
        scanf("%d", &numero);
        if (numero % 2 == 0)
        {
            soma = soma + numero;
        }
        else
        {
            impares++;
        }
    }
    media = (float)soma / (QTDE_NUMEROS - impares);
    printf("Media = %f\n", media);
    printf("Porcentagem de impares: %.1f %%\n", (float)impares / QTDE_NUMEROS * 100);

    return 0;
}