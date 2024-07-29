#include <stdio.h>

// Использование с массивом, операция разности
int main(void)
{
    short ar[10];
    short* ptr = ar;
    short* p = &ar[3];

    printf("ptr = %u, p = %u\n", ptr, p);

    // Разность указателей только для одного и того же массива
    short res = p - ptr;        // 3 (количество элементов)
    printf("res = %d elements\n", res);

    return 0;
}
