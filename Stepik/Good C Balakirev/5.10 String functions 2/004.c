#include <stdio.h>
#include <string.h>

// Поиск символа в строке strchr и strrchr
int main(void)
{
    char str[] = "Abrakadabra";
    char* ptr = strchr(str, 'a');

    // Адрес строки и найденного символа
    printf("str = %p\nptr = %p\n", str, ptr);

    if (ptr != NULL)
        printf("ptr = %c\n", *ptr);

    // Поиск с конца строки
    ptr = strrchr(str, 'a');
    printf("ptr = %p", ptr);

    return 0;
}
