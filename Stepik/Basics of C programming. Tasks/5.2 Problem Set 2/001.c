#include <stdio.h>

int main() {
    unsigned char k;
    scanf("%hhu", &k);

    printf("%d\n", k % 2 ? -1 : 1);
    return 0;
}
