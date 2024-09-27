#include <stdio.h>

int main() {
    short k, m;
    scanf("%hd %hd", &k, &m);

    for (short i = k; i <= m; ++i)
        if (i > 0) printf("%d ", i);

    printf("\n");
    return 0;
}
