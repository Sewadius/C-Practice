#include <stdio.h>

// Сортировка массива выбором
int main(void)
{
    char a[] = {-3, 5, 0, -8, 1, 10};
    int size = sizeof a / sizeof *a;
    int pos;

    for (int i = 0; i < size - 1; ++i) {
        pos = i;

        for (int j = i + 1; j < size; ++j) {
            if (a[pos] > a[j]) pos = j;
        }

        if (pos != i) {
            int temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
        }

    }

    for (int i = 0; i < size; ++i)
        printf("%d ", a[i]);
        
    return 0;
}
