#include <stdio.h>
#include <math.h>

double get_length(int x, int y)
{
    return pow(x * x + y * y, .5);
}

int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%.2f", get_length(x, y));
    return 0;
}
