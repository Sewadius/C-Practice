#include <stdio.h>

// Исключающее ИЛИ, переключение битов

int main(void)
{
    unsigned char flags = 9;            // 00001001
    unsigned char mask = 1;             // 00000001

    flags = flags ^ mask;
    printf("flags = %d", flags);        // 00001000 (число 8)

    flags ^= mask;
    printf("\nflags = %d", flags);      // 00001001 (число 9)

    return 0;
}
