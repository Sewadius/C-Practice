#include <stdio.h>

int main(void)
{
    unsigned short n, i = 1;
    scanf("%hu", &n);

    for (;;) {
        if (i * i >= n) break;
        printf("%u ", i++);
    }

    return 0;
}
