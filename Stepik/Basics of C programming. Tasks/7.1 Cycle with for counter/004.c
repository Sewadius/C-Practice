#include <stdio.h>

int main() {
    short a, b;
    scanf("%hd %hd", &a, &b);

    for (short i = b; i >= a; --i)
        printf("%d ", i);

    printf("\n");
    return 0;
}
