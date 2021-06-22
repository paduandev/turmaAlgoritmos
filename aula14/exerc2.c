#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeros[20];
    int sorteado;

    srand(time(NULL));

    for (int i = 0; i < 20;)
    {
        sorteado = (int)(rand() % 51);

        //procurar o numero sorteado dentro do vetor
        int encontrei = 0;
        for (int j = 0; j < i && encontrei == 0; j++)
        {
            if (numeros[j] == sorteado)
            {
                encontrei = 1;
            }
        }
        
        if (encontrei == 0)
        {
            numeros[i] = sorteado;
            i++;
        }
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d ", numeros[i]);
    }

    return 0;
}