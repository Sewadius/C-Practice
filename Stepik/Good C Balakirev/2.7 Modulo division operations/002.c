#include <stdio.h>

int main(void)
{
    int digit;
    scanf("%d", &digit);

    int res = digit % 2;
    printf("res = %d\n", res);

    return 0;
}
