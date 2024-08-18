#include <stdio.h>

// Пример использования указателя на функцию
int sq_rect(int width, int height)
{
    return width * height;
}

int per_rect(int width, int height)
{
    return 2 * (width + height);
}

int main(void)
{
    int (*ptr_func) (int, int);
    ptr_func = sq_rect;
    int res_1 = ptr_func(2, 3);

    ptr_func = per_rect;
    int res_2 = ptr_func(2, 3);

    printf("sq_rect = %p\n", sq_rect);
    printf("res_1 = %d\n", res_1);
    printf("res_2 = %d\n", res_2);

    return 0;
}
