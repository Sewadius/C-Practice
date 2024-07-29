#include <stdio.h>

// Перебор int с помощью байтового указателя char
int main(void)
{
    int g = 476789;
    char* ptr = (char*)&g;

    for (int i = 0; i < sizeof g; ++i)
        printf("%d ", *ptr++);

    return 0;
}
