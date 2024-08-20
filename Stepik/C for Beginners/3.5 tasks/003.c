#include <stdio.h>

double sq_rect(double, double);

int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%f", sq_rect(a, b));
    return 0;
}

double sq_rect(double a, double b) {
    return a * b;
}
