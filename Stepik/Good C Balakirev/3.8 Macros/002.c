#include <stdio.h>

#define X_N(N)          x ## N

int main(void)
{
    int x1 = 1, x2 = -2, x4 = 10;
    printf("%d\n", X_N(4));         // Подставляется выражение x4
    return 0;
}
