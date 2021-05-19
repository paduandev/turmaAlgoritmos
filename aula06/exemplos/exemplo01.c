#include <stdio.h>

int main()
{
    char continuar;
    int valor;

    do
    {
        printf("Informe o valor:");
        scanf("%d", &valor);

        printf("Deseja continuar(s/n)?");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}