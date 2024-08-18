#include <stdio.h>
#define MAX_LEN 20

int prod_ar(const int* ar, int length)
{
    int result = 1;
    
    for (int i = 0; i < length; ++i)
        result *= ar[i];

    return result;
}

int main(void)
{
    int arr[MAX_LEN] = {0};
    int length = 0;

    while (length < MAX_LEN && scanf("%d", &arr[length]) == 1) 
        ++length;
    
    printf("%d\n", prod_ar(arr, length));
    return 0;
}
