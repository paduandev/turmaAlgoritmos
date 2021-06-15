#include <stdio.h>

int main()
{
    printf("O menor = %d\n", menor2(1, 3, 2));
    printf("O menor = %d\n", menor2(2, 2, 3));
    printf("O menor = %d\n", menor2(3, 4, 3));

    return 0;
}

int menor(int a, int b, int c)
{
    if (a <= b && a <= c)  // se 'a' é o menor
    {
        return a;
    }
    if (b <= a && b <= c)
    {
        return b;
    }
    return c;
}

int menor2(int a, int b, int c)
{
    int menor = a;

    if (b < menor)
    {
        menor = b;
    }
    if (c < menor)
    {
        menor = c;
    }

    return menor;
}

