#include <stdio.h>

int main() {
    unsigned char k;
    scanf("%hhu", &k);

    int result = 1;
    for (int i = k; i > 0; --i)
        result *= i;

    printf("%d\n", result);
    return 0;
}
