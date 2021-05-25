#include <stdio.h>

int main()
{
    int n, soma=0, cont;
    float media;

    cont = 0;
    while(cont < 3) {
        scanf("%d", &n);// 1, 2
        cont++;
        soma = soma + n;
    }

    // media = soma / 3.0; // usa 3 float para fazer a conta considerando o decimal
    media = (float)soma / 3; // casting = conversão
    printf("Media = %f\n", media);

    return 0;
}