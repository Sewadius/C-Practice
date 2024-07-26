#include <stdio.h>
#define SIZE_BUFFER 1024

// Примеры корректного объявления массивов

int main(void)
{
    double f[30];
    char buffer[SIZE_BUFFER];
    char bytes[sizeof(double)];
    short arr[8 * 5];

    return 0;
}
