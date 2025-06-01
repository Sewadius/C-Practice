#include <stdio.h>
#include <stdbool.h>

// 8 kyu - Is it even?
bool is_even(double n)
{
    if ((long int)n != n)
        return false;

    return (long int)n % 2 == 0;
}

int main(void)
{
    printf("%d\n", is_even(0));     // true
    printf("%d\n", is_even(.5));    // false
    printf("%d\n", is_even(1));     // false
    printf("%d\n", is_even(2));     // true
    printf("%d\n", is_even(-4));    // true

    return 0;
}
