#include <stdio.h>

int main(void)
{
    int a0, d, n;
    scanf("%d; %d; %d", &a0, &d, &n);

    // Здесь продолжайте программу
    for (int i = 1; i <= n; ++i)
      printf("%d ", a0 + (i - 1) * d);

    return 0;
}
