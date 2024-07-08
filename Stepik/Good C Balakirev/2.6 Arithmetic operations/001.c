#include <stdio.h>

// Пример по работе с арифметическими операциями
int main(void)
{
    short a = -5;
    int b = 10;
    float c = 5.4f;
    double d = -6.5;

    int res_1 = a + b;              // Приводится к типу int (повышение типа)
    short res_2 = 100 - b;          // Понижение типа int -> short
    float res_3 = 5.4 - c;          // Понижение типа double -> float
    double res_4 = d * 4;           // int приводится к double при умножении

    return 0;
}
