#include <stdio.h>

int main(void)
{
    int number;
    
    while (scanf("%d", &number) == 1 && number != 0)
        printf("%d ", number * number);

    return 0;
}
