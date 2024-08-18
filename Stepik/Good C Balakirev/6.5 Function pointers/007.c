#include <stdio.h>
#include <string.h>

void copy_string(char* dst, size_t max_len_dst, const char* src /* здесь указатель на функцию */)
{
    // здесь продолжайте функцию
}

int main(void)
{
    char str[100] = {0}, str2[20];
    fgets(str, sizeof(str) - 1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    // здесь продолжайте программу

    return 0;
}
