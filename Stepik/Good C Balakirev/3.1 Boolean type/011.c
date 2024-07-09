#include <stdio.h>

int main(void)
{
    double x, y;
    scanf("%lf %lf", &x, &y);

    _Bool check_x = x < -5 || x > 10;
    _Bool check_y = y < 0 || y > 7;
    printf("%d", check_x || check_y);
    
    return 0;
}
