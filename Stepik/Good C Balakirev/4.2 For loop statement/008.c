#include <stdio.h>

int main(void)
{
    unsigned result = 0;
    
    short digit;
    scanf("%hd", &digit);

    while (digit != 0) {
        result *= 10;
        result += digit;
        scanf("%hd", &digit);
    }

    printf("%u\n", result);
    return 0;
}
