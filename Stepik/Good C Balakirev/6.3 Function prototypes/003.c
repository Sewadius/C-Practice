#include <stdio.h>

int calc_rect(int, int, int);

int main(void)
{
    int a, b, t;
    scanf("%d, %d, %d", &a, &b, &t);

    // Здесь продолжайте программу
    printf("%d\n", calc_rect(a, b, t));
    return 0;
}

int calc_rect(int w, int h, int type)
{
    return type == 1 ? w * h : 2 * (w + h);
}
