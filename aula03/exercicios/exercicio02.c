
// leia um numero inteiro e diga se é par ou impar

#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) 
    {
        printf("%d eh par\n", numero);
    }
    else
    {
        printf("%d eh impar\n", numero);
    }

    return 0;
}
