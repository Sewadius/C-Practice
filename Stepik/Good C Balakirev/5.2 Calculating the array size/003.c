#include <stdio.h>

// Инициализация без размера элементами
int main(void)
{
    int coords[] = {10, -2, 30};
    size_t size = sizeof coords / sizeof *coords;

    for (int i = 0; i < size; ++i)
        printf("%d ", coords[i]);
    printf("\n");

    // Инициализация по индексам
    short digits[10] = {-1, [2] = 5, 18, [9] = -1};

    for (int i = 0; i < 10; ++i)
        printf("%d ", digits[i]);

    return 0;
}
