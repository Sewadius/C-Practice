#include <stdio.h>

// Escape-последовательности
int main(void)
{
    char s[] = "I like programming in \"C\" language.";
    puts(s);

    char str[] = "\x61 \x4f";
    puts(str);
    
    return 0;
}
