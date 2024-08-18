#include <stdio.h>

// Деление двух целых чисел (целочисленное и вещественное)
int main(void)
{
    int a, b;
    printf("Enter first & second integers: ");
    scanf("%d%d", &a, &b);

    int res_1 = a / b;
    double res_2 = (double)a / b;

    printf("Integer division: %d\n", res_1);
    printf("Double division: %f\n", res_2);

    return 0;
}
