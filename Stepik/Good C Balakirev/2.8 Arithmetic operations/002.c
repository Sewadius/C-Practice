#include <stdio.h>

int main(void)
{
    short a, b;
    scanf("%hd %hd", &a, &b);
    a *= 3; b -= 10;
    printf("%d", a * b);
    return 0;
}
