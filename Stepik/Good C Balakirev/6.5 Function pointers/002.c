#include <stdio.h>

// Вызов void функции через указатель
void print_hi(void)
{
    puts("Hi!");
}

int main(void)
{
    void (*ptr_hi) (void);
    ptr_hi = print_hi;
    ptr_hi();

    return 0;
}
