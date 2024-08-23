#include <stdio.h>

int sum(int a, int b, int c, int d, int e)
{
    return a + b + c + d + e;
}

int main(void)
{
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    for (int i = 0; i < 5; ++i)
        printf("%d ", sum(a, b, c, d, e));
        
    return 0;   
}
