#include <stdio.h>

// 8 kyu - Even or Odd
const char* even_or_odd(int number)
{
    return number & 1 ? "Odd" : "Even";
}

int main(void)
{
    int n1 = 10, n2 = 13;
    printf("n1 = %d is %s\n", n1, even_or_odd(n1));
    printf("n2 = %d is %s\n", n2, even_or_odd(n2));

    return 0;
}
