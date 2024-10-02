#include <stdio.h>
#define STOP -9999

int main() {
    int n = 0;

    while (1) {
        scanf("%d", &n);
        if (n == STOP) break;
        printf("%d ", n);
    }

    puts("");
    return 0;
}
