#include <stdio.h>

int main(void)
{
    int value;
    scanf("%d", &value);

    short* ptr = (short*)&value;
    ++*ptr; ++ptr; ++*ptr;
    printf("%d", value);

    return 0;
}
