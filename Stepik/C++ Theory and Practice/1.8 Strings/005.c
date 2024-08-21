#include <stdio.h>

int main(void)
{
    char word[] = "abrakadabra";

    // Длина массива
    printf("%zu ", sizeof word / sizeof *word);

    // Длина строки
    size_t size = 0;
    char* ptr_word = word;

    while (*ptr_word++ != '\0') ++size;
    printf("%zu ", size);

    // Последний элемент, преобразованный в int
    printf("%d", word[size]);

    return 0;
}
