// Ler dois números e exibir a soma destes números

#include <stdio.h>

int main()
{
    int numero1, numero2;
    int soma;

    printf("Digite dois valores inteiros:\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    // printf("%d\n", numero1 + numero2);
    soma = numero1 + numero2;

    printf("%d + %d = %d\n", numero1, numero2, soma);

    return 0;
}