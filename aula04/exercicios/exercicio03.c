#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, media, exame;
    int faltas;

    printf("Digite a nota 1:");
    scanf("%f", &nota1);
    printf("Digite a nota 2:");
    scanf("%f", &nota2);
    printf("Digite a nota 3:");
    scanf("%f", &nota3);
    printf("Digite a nota 4:");
    scanf("%f", &nota4);

    printf("Informe o numero de faltas:");
    scanf("%d", &faltas);

    if (faltas > 15)
    {
        printf("Aluno reprovado por faltas (%d).\n", faltas);
    }
    else
    {
        media = (nota1 + nota2 + nota3 + nota4) / 4;
        if (media >= 6)
        {
            printf("Aluno aprovado com media %.2f.\n", media);
        }
        else
        {
            printf("Digite a nota do exame:");
            scanf("%f", &exame);
            media = (media + exame) / 2;
            if (media >= 5)
            {
                printf("Aluno aprovado em exame com media %.2f.\n", media);
            }
            else
            {
                printf("Aluno reprovado com media %.2f.\n", media);
            }
        }
    }

    return 0;
}