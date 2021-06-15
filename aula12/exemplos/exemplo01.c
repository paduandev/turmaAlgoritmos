#include <stdio.h> // header  

void linha(); // protótipo da função = declaração

int main() // função principal
{
    linha();
    printf("Meu programa\n");
    linha();
    printf("v.0.1\n");
    linha2(5);
    linha2(15);
    linha3(10, '*');

    int n = 20;
    char letra = '@';

    linha3(letra, n);

    return 0;
}

void linha() // void significa que não tem retorno
{
    printf("------------\n");
}

void linha2(int tamanho) 
{
    int i;
    for(i = 0; i < tamanho ; i++) 
    {
        printf("-");
    }
    printf("\n");
}

void linha3(int tamanho, char tipo) 
{
    int i;
    for(i = 0; i < tamanho ; i++) 
    {
        printf("%c", tipo);
    }
    printf("\n");
}