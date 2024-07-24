#include <stdio.h>

int main(void)
{
    short a, b;
    scanf("%hd", &b);

    // Здесь продолжайте программу
    short* ptr_a = &a;
    *ptr_a = b;
    printf("%d", *ptr_a);
    
    // __ASSERT_TESTS__ 
    return 0;
}
