#include <stdio.h>

int main()
{
    int qtde, cobaias, coelhos = 0, ratos = 0, sapos = 0, total;
    char tipo;

    scanf("%d", &qtde);

    while (qtde > 0)
    {
        scanf("%d%c", &cobaias, &tipo);
        switch (tipo)
        {
        case 'C':
            coelhos = coelhos + cobaias;
            break;
        case 'S':
            sapos = sapos + cobaias;
            break;
        case 'R':
            ratos = ratos + cobaias;
            break;
        
        default:
            break;
        }
        qtde--;
    }

    total = coelhos + sapos + ratos;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);

    printf("Percentual de coelhos: %.2f %%\n", ((float)coelhos / total) * 100);
    printf("Percentual de ratos: %.2f %%\n", ((float)ratos / total) * 100);
    printf("Percentual de sapos: %.2f %%\n", ((float)sapos / total) * 100);
    
    return 0;
}