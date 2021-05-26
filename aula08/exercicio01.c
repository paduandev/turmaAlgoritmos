#include <stdio.h>

#define NUM_TURMAS 2
#define NUM_AUNOS 3

int main()
{
    float media_aluno, media_turma, media_geral;
    int turma, aluno;

    media_geral = 0;
    for (turma = 1; turma <= NUM_TURMAS; turma++)
    {
        media_turma = 0;
        for (aluno = 1; aluno <= NUM_AUNOS; aluno++)
        {
            printf("Digite a media do aluno %d: ", aluno);
            scanf("%f", &media_aluno);
            media_turma = media_turma + media_aluno;
        }
        media_turma = media_turma / NUM_AUNOS;
        printf("Media da turma %d = %.2f\n", turma, media_turma);

        media_geral = media_geral + media_turma;
    }

    media_geral = media_geral / NUM_TURMAS;
    printf("Media geral %.2f\n", media_geral);

    return 0;
}