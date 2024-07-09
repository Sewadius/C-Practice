#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    _Bool result = a % 5 == 0;
    printf("%d", result * 100);

    return 0;
}
