#include <stdio.h>

int main(void)
{
    char byte1 = '0', byte2 = '0';
    
    // Чтение данных через обязательную запятую
    int res1 = scanf("%c,%c", &byte1, &byte2);

    printf("byte1 = %c, byte2 = %c", byte1, byte2);
    return 0;
}