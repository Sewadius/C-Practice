#include <stdio.h>
#include "func.h"

// Использование заголовочного файла
int main(void)
{
    printf("abs = %d\n", abs_int(-5));
    printf("sq_to_int = %d\n", sq_to_int(-5.5));
    printf("per = %2.f\n", per_sq(2.5, 3.5));
    return 0;
}


