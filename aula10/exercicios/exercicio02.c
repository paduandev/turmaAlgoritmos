#include <stdio.h>

int main()
{
    int lados[] = {0, 0, 0, 0, 0, 0};
    int i, lado;

    do
    {
        printf("Digite o lado sorteado do dado (-1 TERMINA): ");
        scanf("%d", &lado);

        if (lado > 0 && lado < 7)
        {
            lados[lado - 1]++;
        }
        else
        {
            if (lado != -1)
            {
                printf("Valor invalido. Digite de 1 a 6\n");
            }
        }

    } while (lado != -1);

    for (i = 0; i < 6; i++)
    {
        printf("lado %d = %d\n", i + 1, lados[i]);
    }

    return 0;
}