#include <stdio.h>

int main(void)
{
    int count;
    scanf("%d", &count);

    char* ptr = (char*)&count;
    unsigned char flags = 9;

    for (int i = 0; i < sizeof count; ++i, ++ptr)
        *ptr |= flags;

    printf("%d", count);
    return 0;
}
