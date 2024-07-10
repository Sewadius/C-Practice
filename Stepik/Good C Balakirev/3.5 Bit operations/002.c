#include <stdio.h>

// Битовое И (умножение)

int main(void)
{
    unsigned char flags = 5;        // 00000101
    unsigned char mask = 4;         // 00000100
    unsigned char res = flags & mask;

    if ((flags & mask) == mask)
        printf("bit 2 is on");
    else
        printf("bit 2 is off");

    printf("\nres = %d", res);
    return 0;
}
