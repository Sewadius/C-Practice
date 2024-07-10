#include <stdio.h>

int main(void)
{
    short type = 0;
    double w, h;

    if (scanf("%hd %lf %lf", &type, &w, &h) != 3) {
        printf("Input error.");
        return 0;
    }

    // Здесь продолжайте программу
    double result = type == 1 ? w * h : (type == 2 ? 2 * (w + h) : -1);
    result > 0 ? printf("%.1f", result) : printf("-1");

    return 0;
}
