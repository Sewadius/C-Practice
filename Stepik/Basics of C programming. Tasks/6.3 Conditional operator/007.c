#include <stdio.h>
#define LIMIT 500
#define PAY 350

int main() {
    size_t minutes;
    scanf("%zu", &minutes);

    size_t amount = PAY;
    if (minutes > LIMIT) amount += (minutes - LIMIT) * 2;

    printf("%zu\n", amount);
    return 0;
}
