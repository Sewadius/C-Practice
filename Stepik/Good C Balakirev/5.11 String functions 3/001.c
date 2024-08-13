#include <stdio.h>

// Использование функции sprintf()
int main(void)
{
    double width = 2.4, height = 0.76, depth = 3.14;
    char name[] = "Chair";
    char info[100];
    const char format[] = "(%s: %.2f x %.2f x %.2f)";

    sprintf(info, format, name, width, height, depth);
    puts(info);

    return 0;
}
