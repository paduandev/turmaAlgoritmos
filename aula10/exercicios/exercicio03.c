
#include <stdio.h>
#include <string.h>

// Emerson'\0'
// 0123456  7

int main()
{
    char frase[200]; 
    int posicaoFinal = 0, posicaoInicial = 0;

    printf("Digite uma palavra ou frase:");
    //scanf("%s", frase);
    gets(frase);

/*     while(frase[posicaoFinal] != '\0') 
    {
        posicaoFinal++;
    } */

    posicaoFinal = strlen(frase);

    posicaoFinal--; // ficar marcando a última posição da frase

    while( posicaoInicial < posicaoFinal ) 
    {
        if(frase[posicaoInicial] == frase[posicaoFinal])
        {
            posicaoInicial++;
            posicaoFinal--;
        }
        else{
            printf("Nao eh palindromo.\n");
            return 0;
        }
    }

    printf("%s eh um palindromo\n", frase);

    return 0;
}