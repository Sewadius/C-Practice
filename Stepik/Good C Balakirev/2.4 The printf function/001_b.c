#include <stdio.h>

int main(void)
{
    short var_h = 100;
    int var_i = 1024;
    double var_d = 0.5;

    printf("var_h = %d, var_i = %d, %f\n\n", var_h, var_i, var_d);

    var_i = -1283;
    var_d = 54.34675;

    // Выравнивание по правому краю
    printf("[%10d]\n", var_i);
    printf("[%10f]\n\n", var_d);

    // Выравнивание по левому краю
    printf("[%-10d]\n", var_i);
    printf("[%-10f]\n\n", var_d);

    // Значащие цифры
    printf("[%12.7d]\n", var_i);        // Количество значащих цифр
    printf("[%12.3f]\n\n", var_d);      // Количество цифр в дробной части

    // Значащие цифры
    printf("[%.7d]\n", var_i);          // Количество значащих цифр
    printf("[%.3f]\n\n", var_d);        // Количество цифр в дробной части

    // Значащие цифры
    printf("[%#X]\n", var_i);           // Вывод в HEX
    printf("[%+.2f]\n\n", var_d);       // Вывод знака числа

    getchar();
    return 0;
}