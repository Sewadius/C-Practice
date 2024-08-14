#include <stdio.h>

// Досрочный выбор из функции через return
void print_even_x(int x)
{
    if (x % 2 != 0) return;
    printf("x = %d\n", x);
}

int main(void)
{
    print_even_x(12);
    print_even_x(11);
    return 0;
}
