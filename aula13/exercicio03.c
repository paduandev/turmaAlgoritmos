#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMITE 10
#define MAX_TENTATIVAS 5

int sorteio(int limite);
void valida(int palpite, int secreto);

int main()
{
    int secreto, palpite;

    secreto = sorteio(LIMITE);

    do
    {
        printf("Tente adivinhar o numero secreto ( 1 a %d): ", LIMITE);
        scanf("%d", &palpite);

        valida(palpite, secreto);

    } while (palpite != secreto);

    return 0;
}

int sorteio(int limite)
{
    srand(time(NULL)); // inicializa o gerador em um certo ponto

    return (rand() % limite) + 1; // realiza o "sorteio" do número
}

void valida(int palpite, int secreto)
{
    static int tentativas = 0; // static faz que a variável não seja recriada a cada chamada da função

    tentativas++;

    if (palpite > secreto)
    {
        printf("Tentativa %d: O numero secreto eh menor.\n", tentativas);
    }
    else
    {
        if (palpite < secreto)
        {
            printf("Tentativa %d: O numero secreto eh maior.\n", tentativas);
        }
        else
        {
            printf("Voce acertou!\n");
            if (tentativas > MAX_TENTATIVAS)
            {
                printf("mas... poderia ter acertato com um numero menor de tentativas.\n");
            }
        }
    }
}