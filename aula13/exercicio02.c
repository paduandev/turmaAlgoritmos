#include <stdio.h>


int main()
{
    int valor;

    printf("Digite um numero inteiro:");
    scanf("%d", &valor);

    divideDigitos(valor);

    return 0;
}

void divideDigitos(int valor) 
{
    int proximo;

    do{
       printf("%d ", valor % 10);
       proximo = valor / 10;
       valor = proximo;
    }while(proximo > 0);

    printf("\n");
}

