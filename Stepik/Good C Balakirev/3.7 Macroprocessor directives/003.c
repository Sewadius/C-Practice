#include <stdio.h>

#define KMH s_mc * 3.6

int main(void)
{
    int s_mc;
    scanf("%d", &s_mc);

    // Здесь продолжайте программу
    double s_kmh = KMH;
    printf("%.2f", s_kmh);

    return 0;
}
