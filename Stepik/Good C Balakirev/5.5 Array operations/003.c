#include <stdio.h>
#define TOTAL_MARKS 10

// Удаление элемента массива по индексу
int main(void)
{
    int marks[TOTAL_MARKS] = {3, 2, 4, 5, 2, 4};
    int del_index = 3;

    for (int i = 0; i < TOTAL_MARKS; ++i)
        printf("%d ", *(marks + i));
    printf("\n");

    for (int i = del_index; i < TOTAL_MARKS - 1; ++i)
        marks[i] = marks[i + 1];

    for (int i = 0; i < TOTAL_MARKS; ++i)
        printf("%d ", *(marks + i));

    return 0;
}
