#include <stdio.h>

int main(void)
{
    unsigned int a, b, c;
    if (scanf("%u, %u, %u", &a, &b, &c) != 3) {
        printf("Input error.");
        return 0;
    }

    // Здесь продолжайте программу
    _Bool check = c * c == a * a + b * b;
    printf("%s", check ? "yes" : "no");

    return 0;
}
