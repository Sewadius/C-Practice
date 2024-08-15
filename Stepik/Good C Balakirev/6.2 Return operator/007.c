#include <stdio.h>

int is_range(double x, double a, double b)
{
    return a < x && x < b;
}

int main(void)
{
    double x;
    while (scanf("%lf", &x) == 1)
        if (!is_range(x, -2.5, 3.5))
            printf("%.1f ", x);

    return 0;
}
