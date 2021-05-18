#include <stdio.h>

int main()
{
    int limite, cont;

    printf("Informe o valor limite ( > 0 ): ");
    scanf("%d", &limite);

    cont = 1;

    while (cont <= limite)
    {
        printf("%d ", cont);
        cont++;
    }

    return 0;
}