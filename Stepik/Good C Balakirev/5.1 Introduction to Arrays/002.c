#include <stdio.h>
#define TOTAL_MARKS 13

// Пример записи и чтения из массива

int main(void)
{
    int marks[TOTAL_MARKS];

    marks[2] = 4;
    marks[0] = 2 * 3;
    marks[12] = 7 - 2;

    int x = marks[2];
    printf("x = %d\n", x);

    for (int i = 0; i < TOTAL_MARKS; ++i)
        printf("%d ", marks[i]);

    return 0;
}
