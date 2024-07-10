#include <stdio.h>

int main(void)
{
    short a, b, h;
    scanf("%hd, %hd, %hd", &a, &b, &h);
    double square = (a + b) * h * .5;
    printf("%.1f", square);
    return 0;
}
