#include <stdio.h>

int main(void)
{
    unsigned short n, m, s = 0;
    scanf("%hu %hu", &n, &m);

    for (unsigned short i = 0; i <= n; ++i)
        for (unsigned short j = 0; j <= m; ++j) {
            if (i + j >= 10) goto exit_sum;
            s += i + j;
        }
        
    exit_sum: printf("%u", s); 
    return 0;
}
