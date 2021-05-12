#include <stdio.h>

int main()
{
    float salario;

    printf("Informe o salario:");
    scanf("%f", &salario);

    if (salario <= 600)
    {
        printf("Isento");
    }
    else
    {
        if (salario <= 1200)
        {
            printf("20%%");
        }
        else
        {
            if (salario <= 2000)
            {
                printf("25%%");
            }
            else
            {
                printf("30%%");
            }
        }
    }

    return 0;
}