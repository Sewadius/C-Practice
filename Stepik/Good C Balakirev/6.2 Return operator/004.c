#include <stdio.h>

float get_mean2(int a, int b)
{
    return .5 * (a + b);
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%.1f", get_mean2(a, b));
    return 0;
}
