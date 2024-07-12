#include <stdio.h>

#define PI      3.1415
#define GRAD    180 / PI

int main(void)
{
    double rad;
    scanf("%lf", &rad);

    // Здесь продолжайте программу
    float grad = rad * GRAD;
    printf("%.2f", grad);

    return 0;
}
