#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 1, b = 1000;
    int x, m;

    do {
        scanf("%d", &x);
        m = a + rand() % b;
        if (m < x) a = m;
        if (m > x) b = m; 
    } while (m == x);

    printf("%d", x);
    return 0;
}
