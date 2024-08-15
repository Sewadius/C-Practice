#include <stdio.h>
#include <math.h>

double get_geom(int, int);

int main(void)
{
    int a, b;
    scanf("%d, %d", &a, &b);

    // Здесь продолжайте программу
    printf("%.2f", get_geom(a, b));
    return 0;
}

double get_geom(int a, int b)
{
    return pow(a * b, .5);
}
