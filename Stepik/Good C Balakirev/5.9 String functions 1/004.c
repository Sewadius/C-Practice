#include <stdio.h>

// Вычисление длины строки через цикл и указатель
int main(void)
{
    char str[100] = "Length of the string";
    const char* buf = str;
    size_t length = 0;

    while (*buf++) length++;
    puts(str);
    printf("length = %zu\n", length);
    
    return 0;
}
