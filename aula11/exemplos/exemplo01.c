#include <stdio.h>

#define LINHAS 2
#define COLUNAS 3
int main()
{
    int matriz[LINHAS][COLUNAS];
    int linha, coluna;

    for(linha = 0; linha < LINHAS; linha++)
    {
        for(coluna=0; coluna < COLUNAS; coluna++)
        {
            printf("Digite a posicao (%d, %d): ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for(linha = 0; linha < LINHAS; linha++)
    {
        for(coluna=0; coluna < COLUNAS; coluna++)
        {
            printf("%2d ", matriz[linha][coluna]);
        }
        printf("\n");
    }


    return 0;
}