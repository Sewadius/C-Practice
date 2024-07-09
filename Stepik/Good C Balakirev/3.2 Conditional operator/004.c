#include <stdio.h>

int main(void)
{
    int m, n;
    if (scanf("%d, %d", &m, &n) != 2) {
        printf("Input error.");
        return 0;
    }

    // Здесь продолжайте программу
    if (m % n)
        printf("division error\n");
    else
        printf("%d", m / n);

    return 0;
}
