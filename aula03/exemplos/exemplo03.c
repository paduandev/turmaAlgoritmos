#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a sua idade:");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Que bom...");
        printf("Voce ja pode dirigir!\n");
    }
    else
    {
        printf("Que pena...");
        printf("Voce nao pode dirigir!\n");
    }

    printf("Fim do programa.");

    return 0;
}
