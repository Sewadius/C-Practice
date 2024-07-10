#include <stdio.h>

int main(void)
{
    unsigned short number;
    scanf("%hu", &number);
    number >>= 2;
    printf("%d", number);
    return 0;
}
