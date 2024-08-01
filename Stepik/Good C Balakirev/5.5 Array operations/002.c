#include <stdio.h>
#define TOTAL_MARKS 10

// Вставка элемента в массив по индексу
int main(void)
{
    int marks[TOTAL_MARKS] = {3, 2, 5};
    int insert_index = 2;

    for (int i = 0; i < TOTAL_MARKS; ++i)
        printf("%d ", marks[i]);
    printf("\n");

    for (int i = TOTAL_MARKS - 1; i > insert_index; --i) {
        marks[i] = marks[i - 1];
        printf("marks[%d] = marks[%d]\n", i, i - 1);
    }

    marks[insert_index] = 4;

    for (int i = 0; i < TOTAL_MARKS; ++i)
        printf("%d ", marks[i]);

    return 0;
}
