#include <stdio.h>

int main(void)
{
    int var_main;
    static int var_st;

    // var_main - произвольное значение, var_st = 0 (.bss секция)
    printf("var_main = %d, var_st = %d\n", var_main, var_st);
    return 0;
}
