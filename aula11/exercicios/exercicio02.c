#include <stdio.h>

/*

Conte quantas letras 'a' existem em cada palavra da matriz

*/
#define LINHAS 4
#define COLUNAS 20

int main()
{
    char palavras[LINHAS][COLUNAS] = {
        {"morango"},
        {'a', 'b', 'a', 'c', 'a', 't', 'e', '\0'},
        {"laranja"},
        {"goiaba"} };

    int linha, coluna, conta_a;

/*     printf("%s\n", palavras[0]); // s = string = palavra
    printf("%s\n", palavras[1]);

    printf("%c\n", palavras[0][0]); // c = caracter
    printf("%c\n", palavras[0][0]); // d = inteiro (ASCII) */

    
    for (linha = 0; linha < LINHAS; linha++)
    {
        conta_a = 0;
        for (coluna = 0; palavras[linha][coluna] != '\0'; coluna++)
        {
            if(palavras[linha][coluna] == 'a' || palavras[linha][coluna] == 'A')
            {
                conta_a++;
            }
        }
        printf("A palavra %s tem %d letra(s) 'a'\n", palavras[linha], conta_a);
    }

    return 0;
}