#include <stdio.h>

int main(void)
{
    short n = 1, res = 1;
    
    while (n != 0) {
        scanf("%hd", &n);
        if (n <= 0) continue;
        res *= n;
    }

    printf("%d", res);
    return 0;
}
