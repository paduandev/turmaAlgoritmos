#include <stdio.h>

int main()
{
    int x, z, soma, qtde = 1;

    scanf("%d", &x);

    do{
        scanf("%d", &z);
    }while (z <= x);
    
    soma = x;
    while(soma < z) {
        x++;
        soma = soma + x;
        qtde++;
    }
    printf("%d\n", qtde);
    
    return 0;
}