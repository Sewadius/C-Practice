#include <stdio.h>

int main(void)
{
    unsigned short n, i = 1;
    scanf("%hu", &n);

    while (++i < n / 2) {
        if (n % i == 0) {
            printf("no\n");
            goto exit;
        }
    }

    printf("yes\n");
    exit: return 0;
}
