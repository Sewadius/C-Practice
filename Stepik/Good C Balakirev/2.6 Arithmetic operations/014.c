#include <stdio.h>

int main(void)
{
    unsigned short a, b, h;
    scanf("%hu, %hu, %hu", &a, &b, &h);

    double square = (a + b) * h / 2.;
    printf("%.1f", square);

    return 0;
}
