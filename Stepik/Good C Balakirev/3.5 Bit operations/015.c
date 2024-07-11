#include <stdio.h>

int main(void)
{
    unsigned short a, b;
    scanf("%hu %hu", &a, &b);
    a >>= 1; b >>= 1;
    printf("%d", a * b);
    return 0;
}
