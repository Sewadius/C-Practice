#include <stdio.h>

#define ROWS 3
#define COLS 5

int main(void)
{
    short vls[ROWS][COLS] = {0};
    double mean[ROWS] = {0};

    short *ptr_vls = &vls[0][0], x;

    for (int i = 0; i < ROWS * COLS && scanf("%hd", &x) == 1; ++i)
        *ptr_vls++ = x;

    for (int i = 0; i < ROWS; ++i) {
        int sum = 0;
        for (int j = 0; j < COLS; ++j)
            sum += vls[i][j];
        mean[i] = 1. * sum / COLS;
    }

    for (int i = 0; i < ROWS; ++i) {
        printf("%.2f", mean[i]);
        if (i < ROWS - 1) printf(" ");
    }
    
    // __ASSERT_TESTS__ 
    return 0;
}
