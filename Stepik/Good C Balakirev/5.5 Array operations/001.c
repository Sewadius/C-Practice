#include <stdio.h>

// Копирование массивов по элементам
int main(void)
{
    float func_1[100] = {2.4, -3.8, 0, 10.2, 11.78, -5.43};
    float func_2[50];

    int size_1 = sizeof func_1 / sizeof *func_1;
    int size_2 = sizeof func_2 / sizeof *func_2;
    int size = size_1 < size_2 ? size_1 : size_2;

    for (int i = 0; i < size; ++i)
        func_2[i] = func_1[i];

    for (int i = 0; i < size; ++i)
        printf("%.2f ", func_2[i]);

    return 0;
}
