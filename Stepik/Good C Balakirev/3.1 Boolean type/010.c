#include <stdio.h>

int main(void)
{
    float x, y;
    scanf("%f %f", &x, &y);

    _Bool check_x = -5 < x && x < 10;
    _Bool check_y = 0 < y && y < 7;
    printf("%d", check_x && check_y);
    
    return 0;
}
