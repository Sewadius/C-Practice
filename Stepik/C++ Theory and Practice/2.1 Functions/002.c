#include <stdio.h>
#include <stdint.h>

void print_hello()
{
    puts("Hello");
}

int main(void)
{
    uint8_t times;
    scanf("%u", &times);

    for (uint8_t i = 0; i < times; ++i)
        print_hello();

    return 0;   
}
