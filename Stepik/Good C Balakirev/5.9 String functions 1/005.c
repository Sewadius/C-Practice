#include <stdio.h>
#include <string.h>

// Вычисление длины строки через цикл и указатель
int main(void)
{
    char str[100] = "Length of the string";
    size_t length = strlen(str);
    
    printf("length = %zu\n", length);
    return 0;
}
