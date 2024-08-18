#include <stdio.h>

// Обмен значениями через указатели в функции
void swap_2(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main(void)
{
    int x = 5, y = 10;
    swap_2(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
