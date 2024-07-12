#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;
    scanf("%d, %d", &a, &b);

    // Здесь продолжайте программу
    double tan = (double)a / b;
    double result = atan(tan);
    printf("%.2f %.2f", tan, result);

    return 0;
}
