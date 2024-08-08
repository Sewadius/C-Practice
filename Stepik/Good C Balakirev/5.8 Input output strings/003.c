#include <stdio.h>

// Ввод с помощью fgets
int main(void)
{
    char bf[10];
    fgets(bf, sizeof bf, stdin);
    puts(bf);
    return 0;
}
