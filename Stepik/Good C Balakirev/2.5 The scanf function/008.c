#include <stdio.h>

int main(void)
{
    int a1, a2;
    double d1;
    scanf("%d, %d, %*lf, %lf", &a1, &a2, &d1);
    printf("%d %d %.2f", a1, a2, d1);
    return 0;
}
