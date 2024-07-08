// Числовые литералы в разных системах счисления
#include <stdio.h>

int main(void)
{
    int dec, hex, oct;

    dec = 100;      // 100
    hex = 0x1FA;    // 506
    oct = 0123;     // 83

    printf("%i\n", dec);
    printf("%i\n", hex);
    printf("%i\n", oct);

    getchar();
    return 0;
}
