#include <stdio.h>

int main(void)
{
    char buff_1[] = {'a', 'b', 'c'};
    char buff_2[] = {'d', 'e', 'f'};
    char buffer[128] = {'0'};

    char* ptr_ar = buffer;
    size_t len_buff1 = sizeof buff_1 / sizeof *buff_1;
    size_t len_buff2 = sizeof buff_2 / sizeof *buff_2;

    for (size_t i = 0; i < len_buff1; ++i, ++ptr_ar)
        *ptr_ar = *(buff_1 + i);

    for (size_t i = 0; i < len_buff2; i++, ++ptr_ar)
        *ptr_ar = *(buff_2 + i);

    for (size_t i = 0; i < sizeof buffer / sizeof *buffer; ++i)
        printf("%c ", *(buffer + i));

    return 0;
}
