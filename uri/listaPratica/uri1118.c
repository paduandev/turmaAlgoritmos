#include <stdio.h>

int main()
{
    float nota1, nota2;
    int continua;

    do
    {
        scanf("%f", &nota1);
        while (nota1 < 0 || nota1 > 10)
        {
            printf("nota invalida\n");
            scanf("%f", &nota1);
        }

        scanf("%f", &nota2);
        while (nota2 < 0 || nota2 > 10)
        {
            printf("nota invalida\n");
            scanf("%f", &nota2);
        }
        printf("media = %.2f\n", (nota1 + nota2) / 2);

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &continua);

        while (continua != 1 && continua != 2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &continua);
        }

    } while (continua != 2);

    return 0;
}