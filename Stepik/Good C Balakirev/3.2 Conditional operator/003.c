#include <stdio.h>

int main(void)
{
    short x, y;
    if (scanf("%hd, %hd", &x, &y) != 2) {
        printf("Input error.");
        return 0;
    }

    // Здесь продолжайте программу
    short min = x;
    if (y < min) min = y;
    printf("%d", min);

    return 0;
}
