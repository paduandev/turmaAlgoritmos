#include <stdio.h>

#define QTDE_NUMEROS 10 // define uma constante chamada QTDE_NUMEROS que valerá sempre 10

int main()
{
    int numero, cont, cont_pares;

    cont_pares = 0;
    cont = 1;
    while (cont <= QTDE_NUMEROS)
    {
        printf("Digite o %do. numero: ", cont);
        scanf("%d", &numero);
        if(numero % 2 == 0) 
        {
            cont_pares++;
        }
        cont++;
    }
    printf("%d numero(s) par(es).\n", cont_pares);
    printf("%d numero(s) impar(es).\n", QTDE_NUMEROS - cont_pares);

    return 0;
}