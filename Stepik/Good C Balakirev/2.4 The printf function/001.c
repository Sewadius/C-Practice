#include <stdio.h>

int main(void)
{
    int var_i = 1208;
    printf("value = %d\n", var_i);      // Десятичная форма
    printf("value = %x\n", var_i);      // Шестнадцатиричная форма
    printf("value = %f\n\n", var_i);    // Вещественная форма (потреря значения)

    double var_d = 1208e-1;
    printf("var_d = %f", var_d);        // Одинаковый тип, без потери значения

    getchar();
    return 0;
}