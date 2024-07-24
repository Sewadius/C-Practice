#include <stdio.h>

int main(void)
{
    short a, b;
    scanf("%hd, %hd", &a, &b);

    // Здесь продолжайте программу
    short *ptr_a = &a, *ptr_b = &b;
    short res = *ptr_a * *ptr_b;
    printf("%d", res);

    // __ASSERT_TESTS__ 
    return 0;
}
