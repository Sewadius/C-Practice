#include <stdio.h>

int main(void)
{
    short x;
    scanf("%hd", &x);
    printf("%d", x > 0 ? x : 0);
    return 0;
}
