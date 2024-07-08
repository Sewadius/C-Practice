#include <stdio.h>

// Приведение типа при делении
int main(void)
{
    short a = -5;
    int b = 10;

    double res_1 = a / b;           // 0.0
    double res_2 = (double)a / b;   // -0.5
    double res_3 = 7. / 2;          // 3.5

    printf("%f %f %f", res_1, res_2, res_3);

    return 0;
}
