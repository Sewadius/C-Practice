#include <stdio.h>
#define STOP -9999

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        printf("%d ", n);
        if (n == STOP) break;
    }

    printf("\n");
    return 0;
}
