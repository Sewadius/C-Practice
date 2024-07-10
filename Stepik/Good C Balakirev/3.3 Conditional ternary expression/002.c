#include <stdio.h>

int main(void)
{
    int x = 8;
    printf("x is %s digit", x % 2 == 0 ? "even" : "odd");
    return 0;
}
