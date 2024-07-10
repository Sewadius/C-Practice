#include <stdio.h>

// Сдвиг битов для знаковой переменной

int main(void)
{
    signed char x = -128;           // 1000 0000
    printf("x = %d\n", x);

    x = x << 1;                     // 0000 0000 (0)
    printf("x = %d\n", x);

    x = -128;                       // 1000 0000
    x = x >> 1;                     // 1100 0000 (-64)
    printf("x = %d\n", x);

    return 0;
}
