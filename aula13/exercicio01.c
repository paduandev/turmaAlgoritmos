#include <stdio.h>

long fatorial(int n);

int main()
{
    int valor;

    printf("Digite um numero inteiro:");
    scanf("%d", &valor);

    printf("%d! = %ld\n", valor, fatorial(valor));

    return 0;
}

long fatorial(int n)
{
    long fat = 1;
    int i;

    if( n <= 0 )
    {
        return -1;
    }
    for (i = n; i > 1; i--)
    {
        fat = fat * i;
    }
    return fat;
}