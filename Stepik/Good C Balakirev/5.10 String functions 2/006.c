#include <stdio.h>
#include <string.h>

// Поиск наличия хотя бы одного из символов
int main(void)
{
    char pass[] = "dfdfg90!#$$A";
    char* ptr = strpbrk(pass, "@!#$^&?");

    // Адрес строки и найденного символа
    printf("str = %p\nptr = %p\n", pass, ptr);

    if (ptr != NULL)
        printf("ptr = %s\n", ptr);

    return 0;
}
