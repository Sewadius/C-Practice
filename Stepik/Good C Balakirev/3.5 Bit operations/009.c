#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);

    // Здесь продолжайте программу
    unsigned char mask = 0x08 | 0x20;

    if ((bits & mask) == mask)
        printf("%d\n", bits);
    else
        printf("-1\n");

    return 0;
}
