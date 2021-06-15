#include <stdio.h>

int ehPar(int numero);
int ehPar2(int numero);
int ehPar3(int numero);

int main()
{
    int valor = 9;

    if (ehPar(valor)) // if(ehPar(valor) == 1) 1 == 1 // 0 == 1
    {
        printf("%d eh par\n", valor);
    }
    else
    {
        printf("%d nao eh par\n", valor);
    }

    return 0;
}

int ehPar(int numero)
{
    return (numero % 2 == 0);
}

int ehPar3(int numero)
{
    if (numero % 2 == 0)
    {
        return 1;
    }
    return 0;
}

int ehPar2(int numero)
{
    if (numero % 2 == 0)
    {
        return 1; // verdadeiro = é par
    }
    else
    {
        return 0; // falso, não é par
    }
}