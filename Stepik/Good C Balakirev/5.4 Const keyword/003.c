#include <stdio.h>

int main(void)
{
    // Здесь продолжайте программу
    const int total = 5;
    int marks[100];

    for (int i = 0; i < total; ++i)
        scanf("%d", &marks[i]);

    for (int i = total - 1; i >= 0; --i)
        printf("%d ", *(marks + i));

    // __ASSERT_TESTS__ 
    return 0;
}
