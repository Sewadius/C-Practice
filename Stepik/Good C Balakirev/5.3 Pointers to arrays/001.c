#include <stdio.h>

// Использование указателей для вывода элементов массива
int main(void)
{
    short ar[] = {4, 3, 2, 1, 5, 6, 7};
    
    for (short i = 0; i < sizeof ar / sizeof *ar; ++i)
        printf("%d ", *(ar + i));

    return 0;
}
