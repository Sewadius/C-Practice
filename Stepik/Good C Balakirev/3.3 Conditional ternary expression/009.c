#include <stdio.h>

int main(void)
{
    short a, b, c;
    scanf("%hd %hd %hd", &a, &b, &c);

    _Bool check = a + b > c ? (b + c > a ? (a + c > b ? 1 : 0) : 0) : 0;
    printf("%s", check ? "yes" : "no");

    return 0;
}
