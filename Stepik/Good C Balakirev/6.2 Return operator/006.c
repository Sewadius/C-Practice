#include <stdio.h>

_Bool is_even(int a) 
{
    return a % 2 == 0;
}

int main(void)
{
    int x;
    while (scanf("%d", &x) == 1)
        if (is_even(x)) 
            printf("%d ", x);

    return 0;
}
