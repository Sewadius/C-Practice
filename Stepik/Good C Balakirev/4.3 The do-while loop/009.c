#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned short m, n, k;
    scanf("%hu %hu %hu", &m, &n, &k);
    double s1 = 1. / (m + n + k), s2 = .0;

    for (unsigned short i = 1; i <= m; ++i)
        for (unsigned short j = 1; j <= n; ++j)
            for (unsigned short t = 1; t <= k; ++t)
                s2 += pow(j, 2) / (pow(i + t, 3) - t);

    printf("%.4f", s1 * s2);
    return 0;
}
