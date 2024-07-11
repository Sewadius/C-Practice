#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    // Здесь продолжайте программу
    for (int i = 0; i < 10; i++) {
        double y = (double)rand() / (double)RAND_MAX * (b - a) + a;
        printf("%.2f ", y);
    }

    return 0;
}
