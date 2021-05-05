#include <stdio.h>

int main()
{
    // variáveis - espaços em memória
    // tipo de dados da variável
    // int -> números inteiros (ex. -1, 3, 0, 12345)
    // TIPO NOME;

    int numero; // declarando uma variável do tipo inteiro

    numero = 12; // atribuição, guarda o valor 12 na variável numero
    printf("%d\n", numero);

    numero = 56; // uma variavel armazena APENAS um valor de cada vez
    printf("%d\n", numero);

    // Operadores: + - * /

    numero = (2 + 3) * 4;
    printf("%d\n", numero);

    numero = numero + 1;
    printf("%d\n", numero);

    return 0;
}