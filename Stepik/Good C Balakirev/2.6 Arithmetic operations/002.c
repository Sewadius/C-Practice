#include <stdio.h>

// Пример по работе с делением
int main(void)
{
    short a = -5;
    int b = 10;
    float c = 5.4f;
    double d = -6.5;

    int res_1 = 7 / 2;          // 3 - дробная часть отбрасывается
    double res_2 = -9 / 2;      // -4 - дробная часть отбрасывается
    float res_3 = a / c;        // -0.92592591 - понижение типа, вещественное деление
    double res_4 = d / b;       // -0.65

    return 0;
}
