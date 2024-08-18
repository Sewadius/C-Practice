#include <stdio.h>
#define TWO 2

// Деление целого числа на 2, пока остаток равен нулю
int main(void)
{
    int number;
    printf("Enter the integer: ");
    scanf("%d", &number);

    while (number % TWO == 0) {
        printf("%d ", number / 2);
        number /= 2;
    }

    return 0;
}
