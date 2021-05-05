#include <stdio.h> // std = standard (padrão) io = input/output

/*
    TIPOS DE DADOS
    inteiro: 1 3 5467 -12
    decimal: 1.2  -34.64
    texto: "Boa noite"
    caracter: 'a'
*/


int main() { // principal

    printf("Boa noite!\n"); // \n = nova linha
    printf("2 + 3\n");

    // printf( FORMATO ,  VALORES );
    // %d - número inteiro
    // %f - número com decimal
    // %c - um caracter
    // %s - texto (string)
    
    printf("2 + 3 = %d\n", 2 + 3);
    printf("O resultado e %f\n", 23.7);

    printf("%d + %d = %d\n", 2, 3, 2 + 3);
    printf("%d * %d = %d\n", 2, 3, 2 * 3);

    printf("Boa noite %s\n", "Emerson");

    return 0;
}