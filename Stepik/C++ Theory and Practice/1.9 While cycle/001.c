#include <stdio.h>
#include <limits.h>
#define SIZE 30

int main(void)
{
    int n = INT_MAX;
    int arr[SIZE];
    int i = 0;

    while (n != 0) {
        scanf("%d", &n);
        arr[i++] = n;
    }

    for (int j = 0; j < i - 1; ++j)
        printf("%d ", arr[j]);

    return 0;
}
