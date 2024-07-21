#include <stdio.h>

int main(void)
{
    unsigned short n = 100;

    while (n < 1000) {
        if (n % 47 == 6 || n % 53 == 45)
            printf("%hu ", n);
        ++n;
    }

    return 0;
}
