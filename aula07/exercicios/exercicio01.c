#include <stdio.h>

#define MAX_NUMEROS 10

int main()
{
    int numero, contador, pares = 0;

    for (contador = 1; contador <= MAX_NUMEROS; contador++)
    {
        printf("Digite o %do. numero: ", contador);
        scanf("%d", &numero);
        if(numero % 2 == 0) 
        {
            pares++;
        } 

    }
    printf("# pares: %d\n", pares);
    printf("# impares: %d\n", MAX_NUMEROS - pares);

    return 0;
}