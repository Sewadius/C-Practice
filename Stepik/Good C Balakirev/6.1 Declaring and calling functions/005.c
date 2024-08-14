#include <stdio.h>

int pow_n(int n, int m)
{
    if (m == 0) return 1;

    int res = n;
    while (--m > 0) n *= res;
    return n;  
}

int main(void)
{
    printf("%d\n", pow_n(2, 4));
    return 0;
}
