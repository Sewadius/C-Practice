#include <stdio.h>
#define LEN 10

int sum_ar(const int* ar, int length)
{
    int sum = 0;
    
    for (int i = 0; i < length; ++i)
        sum += *(ar + i);

    return sum;
}

int main(void)
{
    int arr[LEN] = {0};
    int i = 0;

    while (scanf("%d", &arr[i]) == 1) ++i;
    
    printf("%d\n", sum_ar(arr, LEN));
    return 0;
}
