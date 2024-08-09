#include <stdio.h>
#include <string.h>

// Использование strcat/strncat для объединения строк
int main(void)
{
    char str_cat[100] = "Sergey ";
    char str[15] = "Balakirev";

    strcat(str_cat, str);
    puts(str_cat);

    // Максимально возможно количество для добавления
    size_t max_add = sizeof str - strlen(str) - 1;
    strncat(str, str_cat, max_add);
    str[sizeof str - 1] = '\0';
    
    printf("%zu\n", sizeof str - 1);
    puts(str);

    return 0;
}
