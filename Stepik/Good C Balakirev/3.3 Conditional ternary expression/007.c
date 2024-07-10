#include <stdio.h>

int main(void)
{
    short a, b;
    scanf("%hd %hd", &a, &b);
    printf("%d", a > b ? a + 8 : b + 8);
    return 0;
}
