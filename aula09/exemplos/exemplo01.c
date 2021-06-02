#include <stdio.h>

#define TAM_VETOR 5

int main()
{
    // TIPO nome[TAMANHO]
    float notas[TAM_VETOR]; // 0, 1, 2, ..., TAM_VETOR-1
    float media = 0;
    int i;

    for (i = 0; i < TAM_VETOR; i++)
    {
        printf("Digite a nota do aluno (%d/%d): ", (i+1), TAM_VETOR);
        scanf("%f", &notas[i]);
    }

    printf("Notas lidas:\n");
    for (i = 0; i < TAM_VETOR; i++)
    {
        printf("%.1f ", notas[i]);
        media = media + notas[i];
    }
    media = media / TAM_VETOR;
    printf("\nMedia da sala: %.1f\n", media);
    
    printf("Notas acima da media da turma:\n");
    for (i = 0; i < TAM_VETOR; i++)
    {
        if (notas[i] > media)
        {
            printf("%.1f ", notas[i]);
        }
    }

    return 0;
}