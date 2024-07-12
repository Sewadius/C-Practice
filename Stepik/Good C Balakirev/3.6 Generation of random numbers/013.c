#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main(void)
{
    double angle;
    scanf("%lf", &angle);
    double rad = angle * PI / 180;
    printf("%.1f", sin(rad));
    return 0;
}
