#include <stdio.h>

int main(void)
{
    short a, b;
    scanf("%hd; %hd", &a, &b);
    printf("%s", a == b ? "square" : "rectangle");
    return 0;
}
