#include <stdio.h>
#define SIZE 5

int main(void)
{
    // Здесь продолжайте программу
    int digits[SIZE];

    for (int i = 0; i < SIZE; ++i) 
        scanf("%d", &digits[i]);

    for (int i = 0; i < SIZE; ++i)
        printf("%d ", digits[i]);

    // __ASSERT_TESTS__ 
    return 0;
}
