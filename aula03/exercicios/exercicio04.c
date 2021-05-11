#include <stdio.h>

int main()
{
    float salario, prestacao, limite;

    printf("Informe o valor do salario: ");
    scanf("%f", &salario);
    printf("Informe o valor da prestacao: ");
    scanf("%f", &prestacao);

    limite = salario * 0.3;

    if(prestacao <= limite) 
    {
        printf("O emprestimo pode ser concedido.");
    }
    else
    {
        printf("Emprestimo negado.");
    }

    return 0;
}