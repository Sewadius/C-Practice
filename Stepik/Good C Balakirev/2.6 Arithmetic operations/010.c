#include <stdio.h>

int main(void)
{
    int b1;     // Первый член прогрессии
    int q;      // Знаменатель прогрессии

    scanf("%d, %d", &b1, &q);
    double sum = ((q * q * q * q - 1) * b1) / (q - 1.);
    printf("%.0f", sum);
    return 0;
}
