#include <stdio.h>

int main()
{
    int numero, soma, cont;

    cont = 1;
    soma = 0;

    do
    {
        printf("Digite o %do. valor(0=fim):", cont);
        scanf("%d", &numero);
        if (numero > 0)
        {
            soma = soma + numero;
        }
        cont = cont + 1;
    } while (numero != 0);

    printf("A soma dos valores eh: %d\n", soma);

    return 0;
}