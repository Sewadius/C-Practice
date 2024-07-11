#include <stdio.h>

int main(void)
{
    unsigned int number;
    scanf("%u", &number);
    number <<= 3;
    printf("%d", number);
    return 0;
}
