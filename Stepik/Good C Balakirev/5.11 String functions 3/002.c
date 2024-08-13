#include <stdio.h>

// Преобразование числа в строку с помощью sprintf()
int main(void)
{
    int var_i = -123;
    char str_val[5];

    sprintf(str_val, "%d", var_i);
    puts(str_val);                  // "-123"

    for (int i = 0; i < sizeof str_val / sizeof *str_val; ++i)
        printf("%c ", str_val[i]);

    return 0;
}
