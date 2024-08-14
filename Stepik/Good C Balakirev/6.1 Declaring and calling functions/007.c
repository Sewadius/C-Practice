#include <stdio.h>

_Bool is_triangle(int a, int b, int c )
{
    _Bool 
        check_1 = a + b > c,
        check_2 = a + c > b,
        check_3 = b + c > a;

    return check_1 && check_2 && check_3;
}

int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    _Bool result = is_triangle(a, b, c);
    printf("%d\n", result);
    return 0;
}
