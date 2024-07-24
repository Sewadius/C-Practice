#include <stdio.h>

int main(void)
{
    unsigned n;
    scanf("%hu", &n);

    unsigned m = 0;
    while (n > 0) {
        m *= 10;
        m += n % 10;
        n /= 10;
    }

    printf("%u\n", m);
    return 0;
}
