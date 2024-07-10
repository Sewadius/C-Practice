#include <stdio.h>

int main(void)
{
    int a = 2, b = 3, c = 4;
    int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("max = %d", max);
    return 0;
}
