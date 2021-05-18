#include <stdio.h>

int main()
{
    int limite, cont;

    printf("Digite o limite: ");
    scanf("%d", &limite);

    cont = 1;

/*  Solução 1

    while (cont <= limite)
    {
        if (cont * 2 > limite ) // este é o último número
        {
            printf("%d", cont);
        }
        else
        {
            printf("%d, ", cont);
        }
        cont = cont * 2;
    } */

    while (cont <= limite)
    {
        printf("%d", cont);
        cont = cont * 2;
        if (cont <= limite ) // este não é o último número
        {
            printf(", ");
        }
    }

    return 0;
}