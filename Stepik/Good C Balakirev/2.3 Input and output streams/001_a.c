#include <stdio.h>

int main(void)
{
    int value = getchar();
    int res = putchar(value);
    printf("\n%d", res);

    fflush(stdin);
    getchar();
    return 0;
}
