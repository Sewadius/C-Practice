#include <stdio.h>
#include <string.h>

// Поиск подстроки в строке strstr
int main(void)
{
    char str[] = "Abrakadabra";
    char* ptr = strstr(str, "ra");

    // Адрес строки и найденного символа
    printf("str = %p\nptr = %p\n", str, ptr);

    if (ptr != NULL)
        printf("ptr = %s\n", ptr);

    return 0;
}
