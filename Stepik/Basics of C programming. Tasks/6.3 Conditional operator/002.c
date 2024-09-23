#include <stdio.h>

int main() {
    short a, b, c;
    unsigned short total = 0;

    scanf("%hd %hd %hd", &a, &b, &c);
    if (a > 0) ++total;
    if (b > 0) ++total;
    if (c > 0) ++total;

    printf("%d\n", total);
    return 0;
}
