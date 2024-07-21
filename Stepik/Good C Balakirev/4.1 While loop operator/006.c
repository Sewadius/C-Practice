#include <stdio.h>

int main(void)
{
    unsigned short n;
    unsigned short a = 0, b = 1, sum = 1;
    scanf("%hu", &n);

    if (n > 0) printf("%hu ", sum);

    while (n-- > 1) {
        printf("%hu ", sum);
        a = b; b = sum;
        sum = a + b;
    }

    return 0;
}
