#include <stdio.h>

// Размещение переменной в регистре ЦП
int main(void)
{
    int p = 1, n = 7;

    for (register int i = 2; i <= n; ++i)
        p *= i;

    printf("p = %d\n", p);
    return 0;
}
