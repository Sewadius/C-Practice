#include <stdio.h>

int main(void)
{
    unsigned short a, b, c, d;
    scanf("%hu %hu %hu %hu", &a, &b, &c, &d);

    _Bool check_1 = a - c >= 1 && b - d >= 1;
    _Bool check_2 = a - d >= 1 && b - c >= 1;

    printf(check_1 || check_2 ? "yes\n" : "no\n");
    return 0;
}
