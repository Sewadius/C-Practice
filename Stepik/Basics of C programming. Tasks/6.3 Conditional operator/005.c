#include <stdio.h>

int main() {
    unsigned char b1, b2, b3, b4;
    scanf("%hhu%hhu%hhu%hhu", &b1, &b2, &b3, &b4);

    if (b1 == 1 && b2 == 0 && b3 == 2 && b4 == 4)
        puts("open");
    else
        puts("closed");

    return 0;
}
