#include <stdio.h>

// Копирование строк через цикл
int main(void)
{
    char source[100] = "Source string";
    char destination[10];

    const char* src = source;
    char* dst = destination;

    // Максимальная длина копирования
    int max_len_copy = sizeof destination;

    while (*src != '\0' && max_len_copy-- > 1)
        *dst++ = *src++;
    *dst = '\0';

    puts(destination);
    return 0;
}
