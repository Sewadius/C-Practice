#include <stdio.h>

int main(void)
{
    long digits[128] = {[16] = 4, [32] = 5, [64] = 6};

    for (int i = 0; i < 128; ++i)
        printf("%d ", digits[i]);

    // __ASSERT_TESTS__
    return 0;
}
