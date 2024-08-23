#include <stdio.h>
#define SIZE 50
#define SPACE ' '
#define END '.'

int main(void)
{
    char str[SIZE];
    size_t counter = 0;

    // Чтение всей строки через fgets()
    fgets(str, SIZE, stdin);
    char* ptr_str = str;

    // Провека по каждому символу до '.' через указатель
    while (*ptr_str != END) {
        if (*ptr_str == SPACE) ++counter;
        ++ptr_str;
    }

    // Вывод количества пробелов
    printf("%zu", counter);
    return 0;   
}
