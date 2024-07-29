#include <stdio.h>
#define LEN 64

int main(void)
{
    short ar_rnd[LEN] = {0};

    for (size_t i = 0; i < 5; ++i)
        scanf("%hd", &ar_rnd[i]);

    for (size_t i = 0; i < LEN; ++i)
        printf("%d ", ar_rnd[i]);

    // __ASSERT_TESTS__
    return 0;
}
