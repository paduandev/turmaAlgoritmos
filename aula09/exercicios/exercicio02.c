/* 
Leia o nome de um usuário, e exiba quantos caracteres tem o nome
Ex: Emerson Paduan
-> seu nome tem 13 caracteres
*/

#include <stdio.h>

# define TAM 200

int main()
{
    char nome[TAM];
    int cont = 0, i = 0;

    printf("Digite seu nome: ");
    gets(nome);
    
    while (i < TAM && nome[i] != '\0')
    {
        if (nome[i] != ' ')
        {
            cont++;
        }
        i++;
    }

    printf("Nome: %s\n", nome);
    printf("Seu nome tem %d caracteres\n", cont);

    return 0;
}
