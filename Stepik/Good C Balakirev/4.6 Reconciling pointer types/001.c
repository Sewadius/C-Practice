#include <stdio.h>

int main(void)
{
    short a, b;
    scanf("%hd, %hd", &a, &b);

    // Здесь продолжайте программу
    short* ptr_a = &a;
    short* ptr_b = &b;
    void* ptr_temp = ptr_a;

    ptr_a = ptr_b;
    ptr_b = ptr_temp;

    printf("%d %d", *ptr_a, *ptr_b); 

    // __ASSERT_TESTS__ 
    return 0;
}
