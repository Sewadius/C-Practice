#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 7.5, b = -3.43;
    double max_ab;
    max_ab = a > b ? a : b;

    // Возвращает модуль числа
    double res_abc = a < b ? fabs(a) : fabs(b);
    
    printf("max_ab = %.2f", max_ab);
    printf("\nfabs = %.2f", res_abc);
    return 0;
}
