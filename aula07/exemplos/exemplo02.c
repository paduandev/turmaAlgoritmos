#include <stdio.h>

int main()
{
    float a, b, d;
    scanf("%f %f", &a, &b);

    if (b == 0)
    {
        printf("divisao impossivel");
    }
    else
    {
        d = a / b;
        printf("%.1f\n", d);
    }

    return 0;
}