#include <stdio.h>

// Использование адресной арифметики
int main(void)
{
    int g = 4;
    int* ptr = &g;

    printf("ptr = %u\n", ptr);

    // Адрес увеличивается на 4 байта
    ptr++; printf("ptr = %u\n", ptr);

    // Адрес уменьшается на 4 байта
    ptr--; printf("ptr = %u\n", ptr);

    // Допустимые арифметические операции
    ptr += 3; ptr -= 4;
    ptr = ptr + 10;
    ptr = ptr - 9;

    printf("ptr = %u\n", ptr);
    return 0;
}
