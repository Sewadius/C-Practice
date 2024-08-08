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
    size_t words = 0;
    _Bool in_word = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] != ' ') {
            if (!in_word) {
                words++; in_word = 1;
            }
        } else in_word = 0;
    }

    printf("%zu", words);
    return 0;
}
