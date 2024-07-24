#include <stdio.h>

int main(void)
{
    short a, b, init_a, init_b;

    scanf("%hd, %hd", &a, &b);
    init_a = a; init_b = b;

    // Здесь продолжайте программу
    short *ptr_a = &a, *ptr_b = &b;

    a = *ptr_b;
    *ptr_b = init_a;

    // __ASSERT_TESTS__
    return 0;
}
