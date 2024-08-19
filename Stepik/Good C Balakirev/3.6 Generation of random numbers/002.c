#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    srand(10);  // Установка зерна генерации

    int r_1 = rand();
    int r_2 = rand();

    // Одинаковые значения каждый раз
    printf("%d, %d", r_1, r_2);
    return 0;
}
