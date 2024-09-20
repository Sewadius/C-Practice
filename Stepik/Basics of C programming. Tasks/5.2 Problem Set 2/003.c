#include <stdio.h>

int main() {
    signed char x, sum = 0;

    for (int i = 0; i < 5; ++i) {
        scanf("%hhd", &x);
        x % 2 ? ++sum : --sum;
    }

    printf("%d\n", sum);
    return 0;
}
