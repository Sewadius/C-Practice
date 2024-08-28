#include <stdio.h>

// 8 kyu - All Star Code Challenge #18
size_t str_count(const char* str, char letter)
{
    const char* ptr_str = str;
    size_t counter = 0;

    while (*ptr_str != '\0') {
        if (*ptr_str == letter) ++counter;
        ++ptr_str;
    }

    return counter;
}

int main(void)
{
    size_t res_1 = str_count("Hello", 'o');
    printf("res_1 = %zu\n", res_1);     // 1

    size_t res_2 = str_count("Hello", 'l');
    printf("res_2 = %zu\n", res_2);     // 2

    size_t res_3 = str_count("", 'z');
    printf("res_3 = %zu\n", res_3);     // 0

    return 0;
}
