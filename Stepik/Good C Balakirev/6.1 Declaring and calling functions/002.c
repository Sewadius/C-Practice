#include <stdio.h>

// Функция вычисления периметра прямоугольника
int get_per(int width, int height)
{
    return 2 * (width + height);
}

int main(void)
{
    int w = 2, h = 5;
    printf("Perimeter = %d", get_per(w, h));
    return 0;
}
