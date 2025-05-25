#include <stdio.h>

int main() {
    int k_rice, k_veg;
    scanf("%d%d", &k_rice, &k_veg);

    int total = k_rice + 2 * k_veg;
    printf("%d\n", total);

    return 0;
}
