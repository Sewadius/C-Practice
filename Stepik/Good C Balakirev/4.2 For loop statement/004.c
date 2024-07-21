#include <stdio.h>
#define SYMBOL '='

int main(void)
{
    unsigned short n;
    scanf("%hu", &n);
    for (unsigned short i = 0; i < n; i++)
        printf("%c", SYMBOL);
    return 0;
}
