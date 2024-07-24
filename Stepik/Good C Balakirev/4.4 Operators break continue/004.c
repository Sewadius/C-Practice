#include <stdio.h>

int main(void)
{
    unsigned short n;
    scanf("%hu", &n);

    while (1) {
        if (n == 1) break;

        for (unsigned short i = 2; i <= n; i++) {
            if (n % i == 0) {
                printf("%u ", i);
                n /= i; i = 1;
                continue;
            }
        }
    }
    return 0;
}
