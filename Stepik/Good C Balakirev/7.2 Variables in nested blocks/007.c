#include <stdio.h>

int main(void)
{
    unsigned short n, m;
    scanf("%hu %hu", &n, &m);

    unsigned short total_sum = 0;
    for (unsigned short i = 0; i <= n; ++i)
        for (unsigned short j = 0; j <= m; ++j) {
            unsigned short res = i + j;
            if (res >= 20) goto exit;
            total_sum += res;
        }
    
    exit:
    printf("%u\n", total_sum);
    return 0;
}
