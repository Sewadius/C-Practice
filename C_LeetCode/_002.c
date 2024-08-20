#include <stdio.h>

// Duplicate Zeros
void duplicateZeros(int* arr, int arrSize)
{
    const int ZERO = 0;

    for (int i = 0; i < arrSize; ++i) {
        if (arr[i] == ZERO) {
            for (int j = arrSize - 1; j > i; --j) {
                arr[j] = arr[j - 1];
            }
            if (i + 1 < arrSize)
                arr[i + 1] = ZERO;
            ++i;
        }
    }
}

int main(void)
{
    int arr[] = {1, 0, 2, 3, 0, 4, 5, 0};
    size_t size = sizeof arr / sizeof *arr;
    printf("Initial array: \t");

    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    putchar('\n');

    duplicateZeros(arr, size);

    printf("New array: \t");
    for (int i = 0; i < size; ++i)
        printf("%d ", *(arr + i));

    return 0;
}
