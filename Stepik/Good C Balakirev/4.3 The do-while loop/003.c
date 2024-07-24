#include <stdio.h>

int main(void)
{
    unsigned short n;
    scanf("%hu", &n);

    float result = .0;
    unsigned short i = 0;
    do result += 1. / ++i;
    while (i < n);

    printf("%.2f", result);
    return 0;
}
