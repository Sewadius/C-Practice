#include <stdio.h>

int main(void)
{
    unsigned short n;
    scanf("%hu", &n);

    unsigned short s = 0;
    for (unsigned short i = 1; i < n; i++)
        if (i % 3 == 0 || i % 5 == 0)
            s += i;
    
    printf("%u", s);
    return 0;
}
