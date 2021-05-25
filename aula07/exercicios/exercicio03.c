#include <stdio.h>

#define NUMERO_VOTOS 5

int main()
{
    int ca1 = 0, ca2 = 0, ca3 = 0, ca4 = 0, brancos = 0, nulos = 0, votos_validos;
    int contador, voto;

    for (contador = 1; contador <= NUMERO_VOTOS; contador++)
    {
        printf("Digite o seu voto: ");
        scanf("%d", &voto);

        if (voto == 1)
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
        }
    }

    // contagem
    votos_validos = ca1 + ca2 + ca3 + ca4 + brancos;
    printf("Candidato 1: %d : %.1f\n" ,ca1, (float)ca1 / votos_validos);

    

    // saídas

    return 0;
}