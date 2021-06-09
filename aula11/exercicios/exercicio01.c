/*

Leia uma matrix de números inteiros (4 x 4) e faça as seguintes operações:

1. soma de todos os valores da matriz
2. soma de cada linha da matriz
3. soma da diagonal principal

*/

#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main()
{
    int matriz[LINHAS][COLUNAS];
    int linha, coluna, soma, somaLinha, somaDiagonal;

    for (linha = 0; linha < LINHAS; linha++)
    {
        for (coluna = 0; coluna < COLUNAS; coluna++)
        {
            printf("Digite a posicao (%d, %d): ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    soma = 0;

    for (linha = 0; linha < LINHAS; linha++)
    {
        somaLinha = 0;
        for (coluna = 0; coluna < COLUNAS; coluna++)
        {
            soma = soma + matriz[linha][coluna];
            somaLinha = somaLinha + matriz[linha][coluna];
        }
        printf("soma da linha %d = %d\n", linha, somaLinha);
    }

    somaDiagonal = 0;
    for (linha = 0; linha < LINHAS; linha++)
    {
        somaDiagonal = somaDiagonal + matriz[linha][linha];
    }

    printf("A soma da diagonal principal = %d\n", somaDiagonal);

    printf("A soma de todos valores = %d\n", soma);
    
    return 0;
}