#include <stdio.h>

int main()
{
    int idade;

    // printf("Digite a sua idade:\n");
    printf("%s\n", "Digite a sua idade:");

    // scanf("FORMATO", ENDEREÇO DA VARIÁVEL);
    scanf("%d", &idade);

    printf("Voce tem %d anos.", idade);
}