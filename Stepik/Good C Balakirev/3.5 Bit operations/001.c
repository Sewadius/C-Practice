#include <stdio.h>

// Битовое НЕ

int main(void)
{
    unsigned char var = 153;        // 10011001
    unsigned char not_var = ~var;   // 01100110 (число 102)
    printf("var = %d, not_var = %d\n", var, not_var);
    printf("Sum is %d", var + not_var);
    return 0;
}
