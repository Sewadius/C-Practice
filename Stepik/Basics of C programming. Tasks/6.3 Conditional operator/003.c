#include <stdio.h>

int main() {
    unsigned short a, b;
    scanf("%hu %hu", &a, &b);
    printf(b > a ? "yes\n" : "no\n");
    return 0;
}
