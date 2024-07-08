#include <stdio.h>

// Вычисление площади треугольника по стороне и высоте
int main(void)
{
    double height, a;
    int res = scanf("%lf %lf", &height, &a);

    if (res != 2) {
        printf("Error");
        return 0;
    }

    double square = height * a / 2.;
    printf("Square: %.2f", square);

    return 0;
}
