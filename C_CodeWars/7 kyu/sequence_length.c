#include <stdio.h>

// 7 kyu - Finding length of the sequence
size_t sequence_length(size_t n, const int numbers[n], int elem)
{
    size_t counter = 0, length = 1;

    for (int i = 0; i < n; ++i) {
        if (numbers[i] == elem) ++counter;
        if (counter == 1) length++; 
    }

    if (counter != 2) return 0;
    return length;
}


int main(void)
{
    int arr[] = {0, -3, 7, 4, 0 , 3, 7, 9};
    size_t size = sizeof arr / sizeof *arr;
    int elem = 7;

    printf("Length of subsequence: %zu\n", 
        sequence_length(size, arr, elem));
        
    return 0;
}
