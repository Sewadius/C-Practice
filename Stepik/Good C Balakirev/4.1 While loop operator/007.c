#include <stdio.h>

int main(void)
{
    unsigned short n, m;
    scanf("%hu %hu", &n, &m);

    while (n <= m) {
        if (n % 3 == 0) printf("%hu ", n);
        n++;
    }

    return 0;
}
