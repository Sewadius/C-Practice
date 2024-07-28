#include <stdio.h>

int main(void)
{
    unsigned short n;
    scanf("%hu", &n);

    unsigned short k = 1;

    do {
        for (unsigned short i = 0; i < k; ++i)
            printf("*");
        printf("\n");
        ++k;
    } while (k <= n);

    return 0;
}
