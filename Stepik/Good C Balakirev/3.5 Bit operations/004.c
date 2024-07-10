#include <stdio.h>

// Битовое ИЛИ, сложение (включение битов числа по установленной маске)

int main(void)
{
    unsigned char flags = 9;            // 00001001
    unsigned char mask = 5;             // 00000101

    flags = flags | mask;
    printf("flags = %d", flags);        // 00001101 (число 13)
    return 0;
}
