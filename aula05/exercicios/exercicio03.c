#include <stdio.h>

int main()
{
    int numero, cont, resultado;

    printf("Informe o valor:");
    scanf("%d", &numero);

    cont = 0;

    while (cont <= 10)
    {
        resultado = numero * cont;
        printf("%d x %2d = %2d\n", numero, cont, resultado);
        cont++;
    }

    return 0;
}