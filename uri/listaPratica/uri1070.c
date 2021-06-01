#include <stdio.h>

int main()
{
    int x, y, inicio, final, somaImpares = 0;

    scanf("%d%d", &x, &y);

    if(x < y) {
        inicio = x;
        final = y;
    } else{
        inicio = y;
        final = x;
    }

    for (int i = inicio + 1; i < final; i++)
    {
        if(i % 2 != 0) {
            somaImpares = somaImpares + i;
        }
    }
    printf("%d\n", somaImpares);

    return 0;
}