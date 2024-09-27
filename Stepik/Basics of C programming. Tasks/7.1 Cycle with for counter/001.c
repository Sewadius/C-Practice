#include <stdio.h>

int main() {
    unsigned char n;
    scanf("%hhu", &n);

    for (unsigned char i = 1; i <= n; ++i)
        printf("%d ", i);

    printf("\n");
    return 0;
}
