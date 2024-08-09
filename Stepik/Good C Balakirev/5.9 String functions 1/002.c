#include <stdio.h>
#include <string.h>

// Использование strcpy без проверки длины строки
int main(void)
{
    char source[100] = "Source string";
    char destination[20];
    
    strcpy(destination, source);
    puts(destination);
    
    return 0;
}
