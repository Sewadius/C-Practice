#include <stdio.h>
#include <math.h>

// Пример функции вычисления корня 4-й степени
double sq4_x(double x)
{
    if (x < 0) return NAN;
    return pow(x, .25);
}


int main(void)
{
    printf("%.2f\n", sq4_x(16));
    return 0;
}
