#include <stdio.h>
#include <math.h>
#define GIPOT(a, b) sqrt((a) * (a) + (b) * (b))

// здесь объявляйте макро-функцию

int main(void)
{
    int a, b;
    if (scanf("%d, %d", &a, &b) != 2) {
        printf("Input error");
        return 0;
    }

    // Здесь продолжайте программу
    double length = GIPOT(a + 3, b - 2);
    printf("%.2f", length);

    //__ASSERT_TESTS__
    return 0;
}
