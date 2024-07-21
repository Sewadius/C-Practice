#include <stdio.h>

int main(void)
{
    unsigned short n;
    scanf("%hu", &n);

    for (unsigned short i = 1; i <= n; i++)
        if (n % i == 0) printf("%u ", i);
        
    return 0;
}
