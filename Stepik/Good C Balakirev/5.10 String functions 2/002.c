#include <stdio.h>
#include <string.h>

// Использование strcmp для сравнения строк
int main(void)
{
    char s1[12] = "Hello";
    char s2[10] = "Hello";

    if (strcmp(s1, s2) == 0)
        puts("Strings are equal!");
    else
        puts("Strings are not equal!");

    return 0;
}
