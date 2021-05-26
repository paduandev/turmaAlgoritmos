#include <stdio.h>

#define NUMERO_VOTOS 10

int main()
{
    int ca1 = 0, ca2 = 0, ca3 = 0, ca4 = 0, brancos = 0, nulos = 0, votos_validos;
    int contador, voto;

    for (contador = 1; contador <= NUMERO_VOTOS; contador++)
    {
        printf("1 a 4 - candidatos \n");
        printf("5-branco 6-nulo \n");
        printf("Digite o seu voto: ");
        scanf("%d", &voto);

        switch (voto)
        {
            case 1: 
                printf("Voto para o candidato 1 computado.");
                ca1++;
                break;
            case 2: ca2++;
                break;
            case 3: ca3++;
                break;
            case 4: ca4++;
                break;
            case 5: brancos++;
                break;
            default: nulos++;
                break;
        }

      /*   if (voto == 1) 
        {
            ca1++;
        }
        else
        {
            if (voto == 2)
            {
                ca2++;
            }
            else
            {
                if (voto == 3)
                {
                    ca3++;
                }
                else
                {
                    if (voto == 4)
                    {
                        ca4++;
                    }
                    else
                    {
                        if (voto == 5)
                        {
                            brancos++;
                        }
                        else
                        {
                            nulos++;
                        }
                    }
                }
            }
        } */

    }

    // contagem
    votos_validos = ca1 + ca2 + ca3 + ca4 + brancos;
    
    // saídas
    printf("Candidato 1: %d : %.1f %%\n" ,ca1, (float)ca1 / votos_validos * 100) ;
    printf("Candidato 2: %d : %.1f %%\n" ,ca2, (float)ca2 / votos_validos * 100) ;
    printf("Candidato 3: %d : %.1f %%\n" ,ca3, (float)ca3 / votos_validos * 100) ;
    printf("Candidato 4: %d : %.1f %%\n" ,ca4, (float)ca4 / votos_validos * 100) ;
    printf("Total de brancos: %d\n", brancos);
    printf("Total de nulos: %d\n", nulos);
    printf("Brancos e Nulos %.1f %%\n", (float)(brancos + nulos) / NUMERO_VOTOS * 100);

    return 0;
}