#include <stdio.h>

int main()
{
    int linha, vezes;
    for (linha = 1; linha <= 6; linha++)
    {
        for (vezes = 1; vezes <= linha; vezes++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (linha = 6; linha > 0; linha--)
    {
        for (vezes = 1; vezes <= linha; vezes++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}