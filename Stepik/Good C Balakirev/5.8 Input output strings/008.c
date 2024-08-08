#include <stdio.h>
#define SIZE 100

void strip_string(char* str, int max_len)
{
    int count = 0;
    while (*str++ != '\0' && count++ < max_len);

    if (count > 0) {
        str -= 2;
        if (*str == '\n')
            *str = '\0';
    }
}

int main(void)
{
    char str[SIZE];
    fgets(str, sizeof str, stdin);
    strip_string(str, sizeof str);

    // Здесь продолжайте программу
    for (int i = 0; i < SIZE; ++i)
        if (str[i] == 'e') 
            for (int j = i; j < SIZE - 1; ++j) {
                str[j] = str[j + 1]; --i;
            }

    puts(str);
    return 0;
}
