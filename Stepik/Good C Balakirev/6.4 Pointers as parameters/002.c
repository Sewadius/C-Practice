#include <stdio.h>

// Использование функции с массивом
int sum_ar(const short*, int);

int main(void)
{
    short ar[5] = {10, 15, 20, 25, 30};
    int res = sum_ar(ar, sizeof ar / sizeof *ar);
    printf("sum = %d\n", res);
    return 0;
}

int sum_ar(const short* arr, int length)
{
    int res = 0;
    
    for(int i = 0; i < length; ++i)
        res += arr[i];
    
    return res;
}
