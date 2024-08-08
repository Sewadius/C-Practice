#include <stdio.h>
#include <string.h>

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
    char str[100];
    fgets(str, sizeof(str), stdin);
    strip_string(str, sizeof(str));

    int i = 0;
    int word_start = -1, word_end = -1;
    int word_count = 0;

    while (str[i] != '\0') {
        while (str[i] == ' ') i++;
        if (str[i] == '\0') break;

        if (word_start == -1) word_start = i;

        while (str[i] != ' ' && str[i] != '\0') i++;
        word_end = i;

        word_count++;

        if (word_count == 2) {
            break;
        }

        word_start = -1;
        word_end = -1;
    }

    if (word_count >= 2 && word_start != -1 && word_end != -1) {
        for (i = word_start; i < word_end; i++) {
            putchar(str[i]);
        }
        putchar('\n');
    } else {
        printf("no\n");
    }

    return 0;
}
