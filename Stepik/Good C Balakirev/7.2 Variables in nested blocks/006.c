#include <stdio.h>

int main(void)
{
    unsigned short n;
    unsigned short i = 2;

    scanf("%hu", &n);

    while (i < n) {
        if (n % i == 0) {
            printf("%u ", i);
            n /= i; i = 2; 
            continue;
        }
        ++i;
    }

    printf("%u", n);
    return 0;
}
