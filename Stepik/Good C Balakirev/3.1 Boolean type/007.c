#include <stdio.h>

int main(void)
{
    double d;
    scanf("%lf", &d);
    printf("%d", (int)d % 5 == 0);
    return 0;
}
