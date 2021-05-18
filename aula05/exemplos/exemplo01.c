#include <stdio.h>

int main()
{
    int cont;

    cont = 1; // inicialização

    while ( cont < 11 ) // enquanto(condição) = ponto de parada
    {
        printf("%d ", cont);
        cont++; // cont = cont + 1;
        // cont = cont + 2; // passo ou incremento = modificação na variável da condição
    }

    printf("\nFinal: %d\n", cont);

    return 0;
}