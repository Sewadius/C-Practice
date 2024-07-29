#include <stdio.h>
#define TOTAL_MARKS 13

// Размер массива в байтах и элементах
int main(void)
{
    int marks[TOTAL_MARKS];

    // Size in bytes
    size_t bytes_marks = sizeof marks;
    size_t size_marks = sizeof marks / sizeof(*marks);
    
    printf("Size of the array in bytes: %zu\n", bytes_marks);
    printf("Size of the array in elements: %zu\n", size_marks);
    return 0;
}
