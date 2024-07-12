#include <stdio.h>

int main(void)
{
    unsigned short N;
    scanf("%hu", &N);

    // Здесь продолжайте программу
    _Bool not_enough = (7 * N) % 100;
    short result = (7 * N) / 100;
    if (not_enough) ++result;
    printf("%d", result);

    return 0;
}
