#include <stdio.h>

int main(void)
{
    unsigned short s, m;
    scanf("%hu %hu", &s, &m);
    double price = s * (1 - m / 100.);
    printf("%.2f", price * 2);
    return 0;
}
