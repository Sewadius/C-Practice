#include <stdio.h>

int main(void)
{
    unsigned a, b;
    scanf("%u %u", &a, &b);

    unsigned min = a < b ? a : b;
    unsigned max = min == a ? b : a;

    while (min > 0) {
        max %= min;
        unsigned temp = max;
        max = min; min = temp;
    }

    printf("%u\n", max);
    return 0;
}
