#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("Digite as duas notas:\n");
    scanf("%f%f", &nota1, &nota2);
    // scanf("%f", &nota2);

    // media = (nota1 * 40 + nota2 * 60) / 100;
    media = (nota1 * 0.4 + nota2 * 0.6);

    if(media >= 6) 
    {
        printf("Aluno aprovado com %.2f\n", media);
    }
    else
    {
        printf("Aluno reprovado com %.2f\n", media);
    }
    
    return 0;
}