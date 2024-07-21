#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = n - 1; i++ < m;)
        if (i % 2 == 0) 
            printf("%d ", i);
    return 0;
}
