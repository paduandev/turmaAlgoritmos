#include <stdio.h>

int main()
{
    int numero;
    float metade;

    printf("Digite um numero inteiro:");
    scanf("%d", &numero);

    if (numero > 20)
    {
        metade = (float)numero / 2;        // casting
        printf("Metade = %.2f\n", metade); // .2 = 2 casas decimais
    }

    return 0;
}
