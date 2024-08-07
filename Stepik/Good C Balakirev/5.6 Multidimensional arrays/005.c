#include <stdio.h>
#define LINES 4
#define ROWS 3

int main(void)
{
    // Здесь продолжайте программу
    short ar_2D[LINES][ROWS];
    short* value = &ar_2D[0][0];

    for (int i = 0; i < LINES * ROWS; ++i)
        scanf("%hd", value++);

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < LINES; ++j)
            printf("%d%c", ar_2D[j][i], (j != ROWS) ? ' ' : '\n');
    }

    // __ASSERT_TESTS__ 
    return 0;
}
