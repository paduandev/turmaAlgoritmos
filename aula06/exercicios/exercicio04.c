#include <stdio.h>

#define QTDE_NUMEROS 10 // define uma constante chamada QTDE_NUMEROS que valerá sempre 10

int main()
{
    int numero, cont, maior;

    // maior = -9999999;
    cont = 1;

    printf("Digite o %do. numero: ", cont);
    scanf("%d", &maior);

    while (cont < QTDE_NUMEROS)
    {
        cont++;
        printf("Digite o %do. numero: ", cont);
        scanf("%d", &numero);
        if (numero > maior)
        {
            maior = numero;
        }
        
    }
    printf("O maior valor digitado foi %d\n", maior);

    return 0;
}