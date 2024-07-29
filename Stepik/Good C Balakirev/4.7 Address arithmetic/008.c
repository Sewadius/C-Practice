#include <stdio.h>

int main(void)
{
    int count;
    scanf("%d", &count);

    char* ptr = (char*)&count;
    unsigned char mask = 0b11000010;

    for (int i = 0; i < sizeof count; ++i, ++ptr)
        *ptr &= ~mask;

    printf("%d", count);
    return 0;
}
