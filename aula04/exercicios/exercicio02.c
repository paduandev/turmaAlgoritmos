#include <stdio.h>

int main()
{
    float n1, n2, resposta;
    char operacao;

    printf("Digite o primeiro numero:");
    scanf("%f", &n1);
    printf("Digite o segundo numero:");
    scanf("%f", &n2);
    printf("Digite a operacao (+, -,* ,/): ");
    scanf(" %c", &operacao);

    if (operacao == '+')
    {
        resposta = n1 + n2;
        printf("%.2f %c %.2f = %.2f\n", n1, operacao, n2, resposta);
    }
    else
    {
        if (operacao == '-')
        {
            resposta = n1 - n2;
            printf("%.2f %c %.2f = %.2f\n", n1, operacao, n2, resposta);
        }
        else
        {
            if (operacao == '*')
            {
                printf("%.2f %c %.2f = %.2f\n", n1, operacao, n2, n1 * n2);
            }
            else
            {
                if (operacao == '/')
                {
                    if (n2 > 0)
                    {
                        resposta = n1 / n2;
                        printf("%.2f %c %.2f = %.2f\n", n1, operacao, n2, resposta);
                    }
                    else
                    {
                        printf("impossivel dividir!!");
                    }
                }
                else
                {
                    printf("Sinal invalido");
                }
            }
        }
    }

    return 0;
}