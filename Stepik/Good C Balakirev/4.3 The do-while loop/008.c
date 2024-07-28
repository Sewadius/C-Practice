#include <stdio.h>

int main(void)
{
    unsigned short m, n;
    scanf("%hu %hu", &m, &n);

    while (m <= n) {
        unsigned short reversed = 0;
        unsigned short initial = m;
        
        while (m > 0) {
            reversed *= 10;
            reversed += m % 10;
            m /= 10;
        }

        if (initial == reversed) 
            printf("%d ", initial);

        m = ++initial;
    }

    return 0;
}
