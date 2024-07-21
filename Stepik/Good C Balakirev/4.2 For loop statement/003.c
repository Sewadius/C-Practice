#include <stdio.h>
#include <math.h>

int main(void)
{
    int b0, q, n;
    scanf("%d; %d; %d", &b0, &q, &n);

    // Здесь продолжайте программу
    for (int i = 1; i <= n; i++)
        printf("%.0f ", b0 * pow(q, i - 1));
    return 0;
}
