#include <stdio.h>

// Переменная блока данных for
int main(void)
{
    int t = 33;

    for (int t = 0; t < 3; ++t)
        printf("t = %d\n", t);      // t = 0, 1, 2

    printf("main: t = %d\n", t);    // main: t = 33

    return 0;
}
