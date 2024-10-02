#include <stdio.h>

int main() {
    int total = 0;
    int n;

    do {
        scanf("%d", &n);
        total += n;
    } while (n);

    printf("%d\n", total);
    return 0;
}
