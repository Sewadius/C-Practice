#include <stdio.h>

int main(void)
{
    short ar[10], marks[5];
    size_t count = 0;
    size_t sz_ar = sizeof ar / sizeof *ar;

    while (count < sz_ar && scanf("%hd", &ar[count]) == 1)
        count++;

    // Здесь продолжайте программу
    int j = 0;
    int size = count < 5 ? count : 5;

    for (int i = count - 1; i >= 0; --i) {
        marks[j] = ar[i];
        if (++j == 5) break;
    }

    for (int i = 0; i < size; ++i)
        printf("%d ", marks[i]);

    return 0;
}
