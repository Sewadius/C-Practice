#include <stdio.h>

// 7 kyu - Summing a number's digits
int sum_digits(int n)
{
    int result = 0;
    n = n < 0 ? -n : n;

    do result += n % 10;
    while ((n /= 10) > 0);

    return result;
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits: %d\n", sum_digits(n));
    return 0;
}
