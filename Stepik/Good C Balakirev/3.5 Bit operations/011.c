#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);

    // Здесь продолжайте программу
    unsigned char mask = 0x15;
    bits |= mask;
    printf("%d", bits);
    return 0;
}
