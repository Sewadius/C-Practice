#include <stdio.h>

int main(void)
{
    short var_1;
    int var_2;
    long long var_3;

    // Здесь продолжайте программу
    scanf("%hd, %d, %lld", &var_1, &var_2, &var_3);

    unsigned char arr[14];
    unsigned char* ptr = (unsigned char*)&var_1;
    int i = 0;

    for(; i < sizeof(short); ++i, ++ptr)
        arr[i] = *ptr;

    ptr = (unsigned char*)&var_2;
    for (; i < sizeof(short) + sizeof(int); ++i, ++ptr)
        arr[i] = *ptr;

    ptr = (unsigned char*)&var_3;
    for (; i < sizeof(short) + sizeof(int) + sizeof(long long); ++i, ++ptr)
        arr[i] = *ptr;

    for (int i = 0; i < 14; ++i)
        printf("%u ", arr[i]);

    return 0;
}
