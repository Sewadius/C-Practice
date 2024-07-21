#include <stdio.h>

int main(void)
{
    unsigned n;
    unsigned short digit, total = 0;
    scanf("%u", &n);

    while (n != 0) {
        digit = n % 10;
        total += digit;
        n /= 10;
    }

    printf("%hu", total);
    return 0;
}
