#include <stdio.h>

int main() {
    signed char k;
    scanf("%hhd", &k);

    printf("%d\n", k % 2 ? -1 : 1);
    return 0;
}
