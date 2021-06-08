#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("MAX: %d ", RAND_MAX);
    printf("%d ", rand() % 100);
    printf("%d ", rand() % 100);
    printf("%d ", rand() % 100);

    return 0;
}