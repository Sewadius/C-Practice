#include <stdio.h>

int main(void)
{   
    unsigned short x;
    scanf("%hu", &x);
    
    // Проверка разных условий
    if (x < 10) 
        printf("x in [0; 9]");
    else if (x < 100)
        printf("x in [10; 99]");
    else if (x < 1000)
        printf("x in [100; 999]");
    else
        printf("x > 999");

    return 0;
}
