#include <stdio.h>

// Ввод с помощью getchar в цикле while
int main(void)
{
    char bf[10];
    int max_len = sizeof bf, i = 0;
    char* ptr = bf;
    char ch;

    while ((ch = getchar()) != '\n' && ch != EOF && i < max_len - 1)
        ptr[i++] = ch;

    ptr[i] = '\0';
    puts(bf);

    return 0;
}
