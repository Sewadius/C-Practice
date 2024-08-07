#include <stdio.h>
#define SIZE 3

int main(void)
{
    // Здесь продолжайте программу
    int ar_2D[SIZE][SIZE];

    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            scanf("%d", &ar_2D[i][j]);

    // __ASSERT_TESTS__ 
    return 0;
}
