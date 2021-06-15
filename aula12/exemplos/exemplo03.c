#include <stdio.h>

int soma(int a, int b);
char primeiraLetra(char frase[]);

int main()
{
    int result;

    result = soma(10, 5);

    printf("A soma vale %d\n", result);

    char frase [] = {"Boa noite"};
    printf("A primeira letra = %c\n", primeiraLetra(frase));

    return 0;
}

int soma(int a, int b)
{
    int resultado;

    resultado = a + b;

    return resultado;
}

char primeiraLetra(char frase[])
{
    return frase[0];
}