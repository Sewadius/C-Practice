#include <stdio.h>

// Битовое И (выключение битов числа по установленной маске)

int main(void)
{
    unsigned char flags = 13;           // 00001101
    unsigned char mask = 5;             // 00000101

    flags = flags & ~mask;
    printf("flags = %d", flags);        // 00001000 (число 8)
    return 0;
}
