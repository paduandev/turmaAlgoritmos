
#include <stdio.h>

int main()
{
    int numeros[] = {1,2,3,4,5};
    char letra = 'a';
    char nome[20];
    char nome2[] = "Daniel";
    char nome3[] = {'C', 'a', 'r', 'l', 'o', 's', '\0', 'a', 's', 'x'};

    //printf("%s", nome3);

/*     for(int i=0; i < 10; i++) {
        printf("%d ", numeros[i]);
    } */
     
    printf("Digite o seu nome:");
    //scanf("%s", nome); // ATENÇÃO: NÃO TEM '&'
    gets(nome);
    
    printf("Voce digitou %s\n", nome);

    return 0;
}