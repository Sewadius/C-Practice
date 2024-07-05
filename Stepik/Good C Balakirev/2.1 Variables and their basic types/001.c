#include <stdio.h>

int main(void)
{
    char byte_memory;
    byte_memory = 100;

    char a;
    a = byte_memory;

    printf("%c\n", byte_memory);
    printf("%c\n", a);

    return 0;
}